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
    ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        while(temp1!=NULL){
            int x=st.top();
            temp1->val=x;
            st.pop();
            temp1=temp1->next;
        }
        return head;
    }
};
