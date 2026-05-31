class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total=0;int sum1=0;
    int res=0;int sum2=0;
    for(int i=0;i<gas.size();i++){
    sum1+=gas[i]; 
    }
    for(int i=0;i<cost.size();i++){
    sum2+=cost[i]; 
    }
    if(sum1<sum2)return -1;
    for(int i=0;i<gas.size();i++){
    total+=gas[i]-cost[i];
    if(total<0){
        total=0;
        res=i+1;
    }
} 
    return res%(gas.size());
    }
};
