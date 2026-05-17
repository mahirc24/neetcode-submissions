class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxP=0;
       int minBuy=prices[0];
       for(int p : prices){
         minBuy=min(p,minBuy);
         maxP=max(maxP,p-minBuy);
       }
        return maxP;
    }
};
