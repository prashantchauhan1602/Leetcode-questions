class Solution {
public:
    int expand(string st, int start , int end){
        int count = 0;
        while(start >= 0 && end < st.size() && st[start] == st[end]){
            count++;
            start--;
            end++;
        }
        return count;
    }
    
    int countSubstrings(string s) {
        
        // Odd and even size palindrome approach...
        int totalcount = 0;
        
        for(int i=0;i<s.size();i++){
            
            // oddcount...
            int oddAns = expand(s, i , i);
            
            // evencount...
            int evenAns = expand(s, i, i+1);
            
            totalcount = totalcount + oddAns + evenAns;
        }
        
        return totalcount;
    }
};