class Solution {
public:
    double myPow(double x, int n) {
    if(n>0)return helper(x,n);
    if(n==0)return 1;
    else return (double)1/helper(x,n);
    }

   double helper(double x, int n){
    if(n==0) return 1;
    if(x==0) return 0;
    if(n%2==0){
    return helper(x,n/2)*helper(x,n/2);
    }
    else return x*helper(x,n/2)*helper(x,n/2);
   }
};
