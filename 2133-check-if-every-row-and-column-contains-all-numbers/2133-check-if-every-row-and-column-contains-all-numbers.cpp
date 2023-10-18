class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            unordered_map<int,int>map1, map2;
            for(int j=0; j<n; j++){
                map1[matrix[i][j]]++;
                map2[matrix[j][i]]++;
            }
            if(map1.size() != n || map2.size() != n){
                return false;
            }
        }
        return true;
    }
};