/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
    stack<TreeNode*>st;
    int res=0;
    st.push(root);
    while(!st.empty()){
    TreeNode*node=st.top();
    res=max(maxDepth(node->left)+maxDepth(node->right),res);
    st.pop();
    if(node->left){st.push(node->left);}
    if(node->right){st.push(node->right);}
    }
    return res;

    }
    int maxDepth(TreeNode* root){
        if(root==NULL)return 0;
        TreeNode* node = root;
        return 1+max(maxDepth(node->left),maxDepth(node->right));
    }
};
