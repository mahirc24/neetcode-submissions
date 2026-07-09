/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode*temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0;
        while(i<v.size()){
            if(v.begin()+k+i<=v.end())reverse(v.begin()+i,v.begin()+k+i);
            i = i+k;
        }
        ListNode*newhead = new ListNode(v[0]);
        ListNode*temp1 = newhead;
        for(int i=1;i<v.size();i++){
            ListNode* newnode = new ListNode(v[i]);
            temp1->next=newnode;
            temp1=temp1->next;
        }
        return newhead;

    }
};