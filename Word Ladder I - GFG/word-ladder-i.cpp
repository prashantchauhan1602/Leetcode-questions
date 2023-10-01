//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        
        set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>qs;
        qs.push({startWord,1});
        st.erase(startWord);
        
        while(!qs.empty()){
            string str = qs.front().first;
            int steps = qs.front().second;
            qs.pop();
            
            if(str == targetWord){
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends