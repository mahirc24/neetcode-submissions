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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        priority_queue<int,vector<int>,greater<int>>pq;
        ListNode* temp1 = list1;
        ListNode* temp4 = list1;
        ListNode* temp2 = list2;
        if(list1==NULL&&list2==NULL) return nullptr;
        else if(list1==NULL&&list2!=NULL) return list2;
        else if(list1!=NULL&&list2==NULL) return list1;
        while(temp1!=NULL){
           pq.push(temp1->val);
           temp1=temp1->next;   
        }
        while(temp4->next!=NULL){
           temp4=temp4->next;
        }
        while(temp2!=NULL){
            pq.push(temp2->val);
            temp2=temp2->next;
        }
       temp4->next=list2;
       ListNode* temp3 = list1;
       while(temp3!=NULL){
        int x = pq.top();
        temp3->val=x;
        pq.pop();
        temp3=temp3->next;
       }
       return list1;
            
        }

    
};
