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
    bool isBalanced(TreeNode* root) {
    if(root==NULL) return true;
    int res=0;
    maxDepth(root,res);
    if(abs(res)<=1)return true;
    else return false;

    }
 int maxDepth(TreeNode* root,int &res){
    if(root==NULL)return 0;
    TreeNode* node=root;
    int l =maxDepth(node->left,res);
    int r =maxDepth(node->right,res);
    res=max(res,abs(l-r));
    return 1+max(l,r); 
 }
};
