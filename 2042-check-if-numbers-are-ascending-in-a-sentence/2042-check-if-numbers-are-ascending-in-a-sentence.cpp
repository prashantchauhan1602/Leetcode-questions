class Solution {
public:
    bool areNumbersAscending(string s) {
        int size = s.size();
        vector<int>ans;
        int maxi = INT_MIN;
        int num = 0;
        int digit;
        for(int i=0; i<size; i++){
            if(isdigit(s[i])){
                digit = s[i] - '0';
                num = num*10 + digit;
            }
            else{
                if(num != 0){
                    ans.push_back(num);
                }
                num = 0;
            }
        }
        // last case...
        if(num != 0){
            ans.push_back(num);
        }
        
        for(int i=1; i<ans.size(); i++){
            if(ans[i] <= ans[i-1]){
                return false;
            }
        }
        return true;
    }
};