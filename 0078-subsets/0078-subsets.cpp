class Solution {
    private :
    void solve(vector<int> nums , vector<vector<int>>& ans , vector<int> output , int index)
    {
//         Base Case :
        if(index >= nums.size())
        {
            ans.push_back(output) ;
            return ;
        }
        
//         Exclude
        solve(nums , ans , output , index + 1) ;
        
//         Include
        int element = nums[index] ;
        output.push_back(element) ;
        solve(nums , ans , output , index + 1) ;
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0 ;
        vector<vector<int>> ans ;
        vector<int> output ;
        
        solve(nums , ans , output , index) ;
        return ans ;
    }
};