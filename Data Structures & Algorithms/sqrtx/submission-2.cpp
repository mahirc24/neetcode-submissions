#define ll long long
class Solution {
public:
    int mySqrt(int x) {
    ll l=0;
    ll r=x;
    while(l<=r){
    ll mid = (l+r)/2;
    if(mid*mid<=x && (mid+1)*(mid+1)>=x){
        if(mid*mid==x) return (int)mid;
        if((mid+1)*(mid+1)==x) return (int)(mid+1);
        else return mid;
    }
    else if(mid*mid>x) r=mid-1;
    else if(mid*mid<x) l=mid+1;
    
    } 
    
    }
};