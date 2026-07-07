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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l = left-1;
        int r = right-1;
        stack<int>st;
        ListNode*temp1 = head;
        ListNode*temp2 = head;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode*prev = dummy;
        prev->next = head;
        for(int i=0;i<l;i++){
            temp1 = temp1->next;
            prev = prev->next;
        }
        for(int i=0;i<r;i++){
            temp2 = temp2->next;
        }
        ListNode*head2 = temp2->next;
        while(temp1!=temp2){
            st.push(temp1->val);
            temp1 = temp1->next;
        }
        st.push(temp2->val);
        ListNode* k = new ListNode(st.top());
        st.pop();
        ListNode*temp = k;
        while(!st.empty()){
            int x = st.top();
            st.pop();
            temp->next = new ListNode(x);
            temp = temp->next;
        }
        temp->next = head2;
        prev->next = k;
        return dummy->next;
        
        

    }
};