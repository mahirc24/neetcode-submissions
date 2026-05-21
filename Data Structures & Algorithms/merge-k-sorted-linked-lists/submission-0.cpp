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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.empty())return NULL;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<lists.size();i++){
    ListNode* temp = lists[i];
    while(temp!=NULL){
        pq.push(temp->val);
        temp=temp->next;
      }
    }
    if(pq.empty()) return nullptr;
   ListNode*head= new ListNode(pq.top());
   pq.pop();
   ListNode*temp2=head;
   while(!pq.empty()){
   ListNode*x= new ListNode(pq.top());
   pq.pop();
   temp2->next=x;
   temp2=temp2->next;
   }
   return head;
    }
};
