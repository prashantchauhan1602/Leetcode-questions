class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size() ;
        int ans ;
        unordered_map<int , int> count ;
        for(int i = 0 ; i < size ; i++)
        {
            count[nums[i]]++ ;
        }
        for(auto x:count)
        {
            if(x.second >= 2)
            {
                ans = x.first ;
                return ans ;
            }
        }
        return ans ;
    }
};