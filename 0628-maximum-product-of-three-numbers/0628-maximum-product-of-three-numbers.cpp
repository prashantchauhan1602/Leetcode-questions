class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int end = nums.size() -1 ;
        
        sort(nums.begin() , nums.end()) ;
        // reverse(nums.begin() , nums.end()) ;
        int ans1 = nums[end]* nums[0]*nums[1] ;
        int ans2 = nums[end]*nums[end-1]*nums[end-2] ;
        
        int final = max(ans1 , ans2) ;
        return final ;
        
    }
};