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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp=head;
    ListNode* temp2=head;
    ListNode dummy(0);
    ListNode* prev=&dummy;
    dummy.next=head;
    int cnt=0;
    int cnt2=0;
    if(head->next==NULL||head==NULL) return nullptr;
    while(temp2){
    cnt2++;
    temp2=temp2->next;
    }
    while(temp){
        cnt++;
        if(cnt==cnt2-(n-1)){
        prev->next=prev->next->next;
        temp->next=NULL;
        delete temp;
        break;
        }
        temp=temp->next;
        prev=prev->next;
      }

    return dummy.next;
    }
   
};
