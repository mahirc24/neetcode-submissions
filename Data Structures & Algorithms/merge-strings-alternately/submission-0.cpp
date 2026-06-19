class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string str="";
    int l=0; int n1=word1.length();
    int r=0; int n2=word2.length();
    while(l<n1 && r<n2){
        str+=word1[l];
        str+=word2[r];
        l++;
        r++;
    }
    while(l<n1){
        str+=word1[l];
        l++;
    }
    while(r<n2){
        str+=word2[r];
        r++;
    }
    return str;
    }
};