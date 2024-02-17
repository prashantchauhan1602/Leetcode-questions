class Solution {
public:
    string decodeMessage(string key, string message) {
        
        char start='a';
        char mapping[256] = {0};
        
        for(auto ch:key){
            if(mapping[ch] == 0 && ch != ' '){
                mapping[ch] = start;
                start++;
            }
        }
        
        string ans;
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                char decodeChar = mapping[ch];
                ans.push_back(decodeChar);
            }
        }
        
        return ans;
        
    }
};