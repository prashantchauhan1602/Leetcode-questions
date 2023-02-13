class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.size() ;
        unordered_map<char,int> map ;
        
        for(int i = 0 ; i < len ; i++)
        {
            map[s[i]]++ ;
        }
        
        for(int i = 0 ; i < len ; i++)
        {
            if(map[s[i]] == 1)
            {
                return i ;
            }
        }
        return -1 ;
    }
};