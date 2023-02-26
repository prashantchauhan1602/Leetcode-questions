class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size() ;
        vector<int> ans ;
        for(int i = 0 ; i < size && ans.size() < size ; i++)
        {
                ans.push_back(arr[i]);
                if(arr[i] == 0 && ans.size() < size)
                {
                    ans.push_back(0) ;
                }
            
        }
        arr = ans ;
    }
};