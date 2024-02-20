class Solution {
public:
    
    void solveByString(string s, int k, string& ans){
        int size = s.size();
      
        for(int i=0;i<size;i++){
            
            if(ans.size() >= k-1 && ans.back()== s[i]){
                
                ans.push_back(s[i]);
                
                int end_condition = ans.size() - k;
                bool check=true;
                
                for(int j=ans.size()-1;j>=end_condition; j--){
                    if(ans[j] != s[i]){
                        check = false;
                        break;
                    }
                }
                if(check){
                    ans.erase(end_condition, k);
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }
    }
    string removeDuplicates(string s, int k) {
        string ans;
        solveByString(s, k, ans);
        return ans;
    }
};