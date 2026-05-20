class Solution {
public:
    int search(vector<int>& nums, int target) {
    int l=0;
    int r=nums.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[r]) l=mid+1;
        else r=mid;
    }
    int pivot=l;
    int x=bs(nums,target,0,pivot-1);
    int y=bs(nums,target,pivot,nums.size()-1);
   if(x!=-1) return x;
   return y;
}

    int bs(vector<int>& nums,int target,int l,int r){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]>target) r=mid-1;
        else if(nums[mid]<target) l=mid+1;
        else return mid;
    }
    return -1;
    }

};
