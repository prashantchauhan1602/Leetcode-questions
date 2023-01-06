class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size() ;
        int start = 0 ;
        int end = len - 1 ;
        int mid ;
        
        if(nums[start] <= nums[end])
        {
            return nums[start] ;
        }
        while(start <= end)
        {
            mid = (start + end) / 2 ;
            if(nums[mid] > nums[mid + 1] && mid < end)
            {
                return (nums[mid + 1]);
            }
            
            if(nums[mid] < nums[mid - 1] && mid > start)
            {
                return nums[mid];
            }
            
            if(nums[start] >= nums[mid])
            {
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1;
            }
        }
        return 0;

    }
};