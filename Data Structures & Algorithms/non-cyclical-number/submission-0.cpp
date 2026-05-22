class Solution {
public:
    bool isHappy(int n) {
    unordered_map<int,int>hash;
    while(n!=1){
    int x = s(n);
    hash[x]++;
    n=x;
    if(hash[x]>1) return false;
    }
    return true;
    

    }
int s(int n){
    int sum=0;
    while(n!=0){
        sum=sum+(n%10)*(n%10);
        n=n/10;}
        return sum;
        }
 }
;
