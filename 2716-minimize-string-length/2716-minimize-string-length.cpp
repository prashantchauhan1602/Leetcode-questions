class Solution {
public:
    int minimizedStringLength(string s) {
        string ans;
        unordered_map<char,int>map;
//         ans.push_back(s[0]);
        
//         for(int i=1;i<s.size();i++){
//             if(ans.back() == s[i]){
//                 ans.pop_back();
//             }
//             ans.push_back(s[i]);
//         }
        
//         if(ans.size() > 1 && ans[0] == ans.back()){
//             ans.pop_back();
//         }
        
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        return (map.size());
        
    }
};