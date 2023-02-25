class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> count ;
        int ans ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            count[nums[i]]++ ;
        }
        for(auto x :count)
        {
            if(x.second != 2)
            {
                ans = x.first ;
                // return  ;
            }
        }
        return ans ;
    }
};