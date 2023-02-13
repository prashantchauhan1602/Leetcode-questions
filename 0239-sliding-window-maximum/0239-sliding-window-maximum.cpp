class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) { 
        vector<int> result ;
        int len = nums.size() ;
        deque<int> dq ;
        for(int i= 0 ; i < len ; i++)
        {
            while(!dq.empty() && dq.front() < (i - k + 1))
            {
                dq.pop_front() ;
            }
            
            while(!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back() ;
            }
            
            dq.push_back(i) ;
            if(i >= k -1)
            {
                result.push_back(nums[dq.front()]) ;
            }
        }
        return result ;
    }
};