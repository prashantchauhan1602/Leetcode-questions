class Solution {
public:
    bool isSubsequence(string s, string t) {
//         int n = s.length(),m=t.length();
//         int j = 0; 
    
//     for (int i = 0; i < m and j < n; i++)
//         if (s[j] == t[i])
//             j++;
 
    
//     return (j == n);
        
        int size1 = s.size() ;
        int size2 = t.size() ;
        int j = 0 ;
        for(int i = 0 ; i < size2 && j < size1 ; i++)
        {
            if(s[j] == t[i])
            {
                j++ ;
            }
        }
        if(j == size1)
        {
            return true ;
        }
        else{
            return false ;
        }
    }
};