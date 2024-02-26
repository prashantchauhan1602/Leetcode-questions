class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int symbol_count=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i] == '|'){
                symbol_count++;
            }
            
            else if(s[i] == '*' && (symbol_count >= 0 && symbol_count%2 == 0))
            {
                count++;
            }
        }
        return count;
    }
};