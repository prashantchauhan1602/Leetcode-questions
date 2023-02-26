class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size() ;
        vector<int> ans ;
        unordered_map<int , int> count ;
        for(int i = 0 ; i< len ; i++)
        {
            count[nums[i]]++ ;
        }
        vector<pair<int , int>>store ;
        for(auto x:count)
        {
            store.push_back({x.second , x.first});
        }
        sort(store.rbegin() , store.rend()) ;
        for(int i = 0 ; i < k ; i++)
        {
            ans.push_back(store[i].second) ;
        }
        return ans ;
    }
};