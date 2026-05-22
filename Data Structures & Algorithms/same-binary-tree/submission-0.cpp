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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    stack<TreeNode*>st1;
    stack<TreeNode*>st2;
    if(p==NULL&&q==NULL)return true;
    if(p==NULL&&q!=NULL)return false;
    if(p!=NULL&&q==NULL)return false;
    st1.push(p);st2.push(q);
     while(!st1.empty()||!st2.empty()){
       TreeNode*node1=st1.top();
       TreeNode*node2=st2.top();
       st1.pop();st2.pop();
       if(node1->val!=node2->val) return false;
       if(node1->left&&!node2->left)return false;
       if(node1->right&&!node2->right)return false;
       if(!node1->left&&node2->left)return false;
       if(!node1->right&& node2->right)return false;
       if(node1->left&&node2->left){
        st1.push(node1->left);
        st2.push(node2->left);
       }
      if(node1->right&&node2->right){
       st1.push(node1->right);
       st2.push(node2->right);
       }
      
    }
   return true;
    }
};
