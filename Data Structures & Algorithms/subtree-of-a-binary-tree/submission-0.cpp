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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    int x = subRoot->val;
    bool y = false;
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
    TreeNode*node=st.top();
    st.pop();
    if(node->val==x){
    y = isSameTree(node,subRoot);
    if(y) break;
    }
    if(node->left) st.push(node->left);
    if(node->right) st.push(node->right);
    }
    if(y) return true;
    return false;
 }
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==NULL&&q==NULL) return true;
    if(p && q && p->val==q->val ){
    bool x = isSameTree(p->left,q->left);
    bool y = isSameTree(p->right,q->right);
    return x && y;
    }
    return false;
    }
};
