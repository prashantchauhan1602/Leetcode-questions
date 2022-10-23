class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size() ;
        vector<int> ans ;
        sort(nums.begin() , nums.end()) ;
        // return nums ;
        for(int i = 0 ; i < len -1 ; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ans.push_back(nums[i]) ;
            }
        }
        // for(int i = 0 ; i < ans.size() ; i++)
        // {
        //     nums[i] = ans[i] ;
        // }
        return ans ;
    }
};