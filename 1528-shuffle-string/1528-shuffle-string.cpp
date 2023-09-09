class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans ="";
        int size = s.size();
        
        // for(int i=0; i<size;i++){
        //     for(int j=0; j<size; j++){
        //         if(indices[j] == i){
        //             ans.push_back(s[j]);
        //         }
        //     }
        // }
        
        // string ans ="";
        vector<pair<int,char>>pairs;
        for(int i=0; i<size;i++){
            pairs.push_back(make_pair(indices[i], s[i])); 
        }
        
        sort(pairs.begin(),pairs.end());
        
        for(int i=0; i<size; i++){
            ans.push_back(pairs[i].second);
        }
        
        return ans;
    }
};