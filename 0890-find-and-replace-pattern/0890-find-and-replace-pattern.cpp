class Solution {
public:
    
    string makePattern(string str){
        char start = 'a';
        char mapping[256] = {0};
        for(int i=0;i<str.size();i++){
            char ch = str[i];
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }
        
        for(int i=0;i<str.size();i++){
            char ch = str[i];
            str[i] = mapping[ch];
        }
        return str;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>ans;
        string new_p = makePattern(pattern);
        for(int i=0;i<words.size();i++){
            string str = words[i];
            
            string word_p = makePattern(str);
            if(word_p == new_p){
                ans.push_back(words[i]);
            }
            
        }
        return ans;
        
    }
};