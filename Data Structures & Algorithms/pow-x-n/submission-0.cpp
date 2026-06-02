class Solution {
public:
    double myPow(double x, int n) {
    double res=x;
    for(int i=1;i<abs(n);i++){
     res=res*x;
    }   
    
    if(n>0) return res; 
    if(n<0) return (double)1/res;
    if(n==0) return 1;
    }
};
