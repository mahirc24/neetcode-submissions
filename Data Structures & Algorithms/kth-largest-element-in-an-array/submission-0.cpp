class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int>pq;
    for(int num:nums){
        pq.push(num);
    }  
    int cnt=0;
    int x=0;
   while(!pq.empty()){
    x=pq.top();
    pq.pop();
    cnt++;
    if(cnt==k) break;
    }
   return x;
    }
};
