class Solution {
public:
    void solve(string& digits,int index,string temp,vector<string>&mapping,vector<string>&ans){
        if(index >= digits.size()){
            ans.push_back(temp);
            return ;
        }
        
        int digit = digits[index] - '0';
        string str = mapping[digit];
        
        for(int i=0; i<str.size(); i++){
            temp.push_back(str[i]);
            solve(digits, index+1,temp,mapping,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size() == 0){
            return ans;
        }
        vector<string>mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs" ;
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
        
        int index = 0;
        string temp = "";
        solve(digits, index, temp, mapping, ans);
        return ans;
    }
};