class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int big_n = nums[size-1] * nums[size-2];
        int small_n = nums[0]*nums[1];
        
        return big_n - small_n;
    }
};