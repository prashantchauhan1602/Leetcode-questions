class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> count ;
        int size = arr.size() ;
        for(int i = 0 ; i < size ; i++)
        {
            count[arr[i]]++ ;
        }
        set<int> st ;
        for(auto i :count)
        {
            st.insert(i.second) ;
        }
        if(st.size() == count.size())
        {
            return true ;
        }
        else{
            return false ;
        }
    }
};