class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>qs;
        qs.push({beginWord,1});
        st.erase(beginWord);
        
        while(!qs.empty()){
            string str = qs.front().first;
            int steps = qs.front().second;
            qs.pop();
            
            if(str == endWord) {
                return steps;
            }
            
            for(int i=0; i<str.size(); i++){
                char original = str[i];
                for(char ch='a'; ch<='z'; ch++){
                    str[i] = ch;
                    
                    if(st.find(str) != st.end()){
                        qs.push({str, steps+1});
                        st.erase(str);
                    }
                }
                str[i] = original;
            }
        }
        return 0;
    }
};