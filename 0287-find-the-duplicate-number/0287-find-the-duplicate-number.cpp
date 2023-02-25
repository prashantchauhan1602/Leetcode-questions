class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size() ;
        // int ans ;
        // unordered_map<int , int> count ;
        // for(int i = 0 ; i < size ; i++)
        // {
        //     count[nums[i]]++ ;
        // }
        // for(auto x:count)
        // {
        //     if(x.second >= 2)
        //     {
        //         ans = x.first ;
        //         return ans ;
        //     }
        // }
        // return ans ;
        
        sort(nums.begin() , nums.end()) ;
        int low = 1 ;
        int high = size - 1 ;
        while(low < high)
        {
            int mid = low + (high - low) / 2 ;
            int count = 0 ;
            for(int i = 0 ; i < size ; i++)
            {
                if(nums[i] <= mid)
                {
                    count++ ;
                }
            }
            
            if(count <= mid)
            {
                low = mid + 1 ;
            }
            else{
                high = mid ;
            }
        }
        return low ;
    }
};