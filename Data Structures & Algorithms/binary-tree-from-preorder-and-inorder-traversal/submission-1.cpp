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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
      inMap[inorder[i]]=i;}
      return 
      construct(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
      }
    TreeNode* construct(vector<int>&preorder,int preStart, int preEnd,
    vector<int>&inorder,int inStart,int inEnd, map<int,int>&inMap){
    if(preStart>preEnd||inStart>inEnd) return nullptr;
    TreeNode*root=new TreeNode(preorder[preStart]);
    int x = inMap[preorder[preStart]];
    int len = x-inStart;
    root->left = construct(preorder,preStart+1,preStart+len,inorder,inStart,x-1,inMap);
    root->right = construct(preorder,preStart+len+1,preEnd,inorder,x+1,inEnd,inMap);
    return root;
    }
};
