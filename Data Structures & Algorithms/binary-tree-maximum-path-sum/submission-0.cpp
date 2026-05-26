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
    int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN;
    maxS(root,maxi);
    return maxi;
    }
    int maxS(TreeNode* node,int &maxi){
    if(node==NULL) return 0;
    int lsum = max(0,maxS(node->left,maxi));
    int rsum = max(0,maxS(node->right,maxi));
    maxi=max(maxi,lsum+rsum+node->val);
    return node->val+max(lsum,rsum);
    }
};
