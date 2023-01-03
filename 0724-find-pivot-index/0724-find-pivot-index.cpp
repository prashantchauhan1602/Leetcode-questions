class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size() ;
        int total_sum = 0 ;
        int left_sum = 0 ;
        int req_sum = 0 ;
        for(int i = 0 ; i < size ; i++)
        {
            total_sum = total_sum + nums[i] ;
        }
        
        for(int i = 0 ; i < size ; i++)
        {
            req_sum = left_sum ;
            left_sum = left_sum + nums[i] ;
            total_sum = total_sum - nums[i] ;
            
            if(req_sum == total_sum)
            {
                return i ;
            }
        }
        return -1 ;
    }
};