class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int>nums2;
    int n = nums.size();
    for(int i=0;i<n;i++){
        nums2.push_back(nums[i]);
    }
    for(int i=0;i<n;i++){
        nums2.push_back(nums[i]);
    }
    return nums2;
    }
};