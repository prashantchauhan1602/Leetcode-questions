class Solution {
public:
    bool compare(string parent, string child){
        int p_size = parent.size();
        int c_size = child.size();
        
        for(int i=0; i<c_size;i++){
            char ch = child[i];
            size_t found = parent.find(ch);
            
            if(found == string::npos){
                return false;
            }
            
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        string str1 = "qwertyuiopQWERTYUIOP";
        string str2 = "asdfghjklASDFGHJKL";
        string str3 = "zxcvbnmZXCVBNM";
        
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            
            bool a1 = compare(str1,word);
            bool a2 = compare(str2, word);
            bool a3 = compare(str3, word);
            
            if(a1 || a2 || a3){
                ans.push_back(word);
            }
        }
        return ans;
    }

};