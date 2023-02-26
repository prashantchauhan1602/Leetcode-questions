class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int len = nums.size() ;
        // sort(nums.begin() , nums.end()) ;
        // reverse(nums.begin() ,nums.end()) ;
        map<int , int> count ;
        for(int i = 0 ; i < len ; i++)
        {
            count[nums[i]]++ ;
        }
        int maxCount = 0 ;
        int res = -1 ;
        for(auto &x: count)
        {
            if((maxCount < x.second) && (x.first %2 == 0))
            {
                cout << "hii" ;
                maxCount = x.second ;
                res = x.first ;
            }
        }
        return res ;
    } 
};