class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int r=0;
       for( int i=0;i<piles.size();i++){
       r=max(piles[i],r);
       }
       while(l<=r){
       int hrs = 0;
       int mid=l+(r-l)/2;
       for(int x:piles){
       hrs+=ceil((double)x/mid);
       }
       if(hrs<=h) r=mid-1;
       else if (hrs>h) l=mid+1;
       }
       
       return l;
    }

    
};
