class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        reverse(nums.begin() , nums.end()) ;
        int size = nums.size() ;
        vector<int> ans ;
        for(int i = 0 ; i < size -1 ; i++)
        {
            if(nums[i] != nums[i+1])
            {
                ans.push_back(nums[i]) ;
            }
        }
        ans.push_back(nums[size - 1]) ;
        int len = ans.size() ;
        cout << len ;
        if(len < 3)
        {
            return ans[0] ;
        }
        else{
            return ans[2] ;
        }
        
    }
};