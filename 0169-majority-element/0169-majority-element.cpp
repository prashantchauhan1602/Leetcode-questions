class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size() ;
        int ans ;
        unordered_map<int , int> count ;
        for(int i = 0 ; i < len ; i++)
        {
            count[nums[i]]++ ;
        }
        for(auto x: count)
        {
            if(x.second > len / 2)
            {
                ans = x.first ;
                return ans;
            }
        }
        return ans ;
    }
};