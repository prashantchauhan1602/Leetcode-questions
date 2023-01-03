class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size() ;
        vector<int> ans ;
        int sum = 0 ;
        
        for(int i = 0 ; i < size ; i++)
        {
            sum = sum + nums[i] ;
            ans.push_back(sum) ;
        }
        return ans ;
    }
};