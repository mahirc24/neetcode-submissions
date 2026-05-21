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
    void reorderList(ListNode* head) {
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode*head2=slow->next;
    slow->next=nullptr;
    ListNode*head3=reverselist(head2);
    ListNode dummy(0);
    ListNode* node = &dummy;
    while(head3){
        node->next=head;
        ListNode*x=head->next;
        head->next=head3;
        node=node->next;
        head=head->next;
        head3=x;
    }
    node=node->next;
    return;
    
    }
   ListNode* reverselist(ListNode* head){
   ListNode* curr=head;
   ListNode* prev=NULL;
   while(curr!=NULL){
   ListNode* temp=curr;
   temp=temp->next;
   curr->next=prev;
   prev=curr;
   curr=temp;
   }
   return prev;
   }
};
