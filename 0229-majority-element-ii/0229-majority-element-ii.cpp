class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int len = nums.size() ;
        vector<int> ans ;
        unordered_map<int , int > count ;
        // if(len == 1 || len == 2)
        // {
        //     return nums ;
        // }
        for(int i = 0 ; i < len ; i++)
        {
            count[nums[i]]++ ;
        }
        
        for(auto x:count)
        {
            if(x.second > len / 3)
            {
                ans.push_back(x.first) ;
            }
        }
        return ans ;
    }
};