class Solution {
public:
    
    bool checkPalindrome(string st, int s, int e){
        while(s <= e){
            if(st[s] != st[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        
        while(start <= end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else{
                bool ans1 = checkPalindrome(s, start+1, end);
                bool ans2 = checkPalindrome(s,start,end-1);
                
                return ans1 || ans2;
            }
        }
        return true;
    }
};