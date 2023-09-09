class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans ="";
        int size = s.size();
        
        for(int i=0; i<size;i++){
            for(int j=0; j<size; j++){
                if(indices[j] == i){
                    ans.push_back(s[j]);
                }
            }
        }
        return ans;
    }
};