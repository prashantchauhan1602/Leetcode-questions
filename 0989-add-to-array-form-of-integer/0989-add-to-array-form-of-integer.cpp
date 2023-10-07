class Solution {
public:
    
    void solve(vector<int>& num, int k, int carry, vector<int>&ans){
        int index = num.size()-1;
        
        while(index >=0){
            int number = num[index] + (k % 10) + carry;
            int digit = number % 10;
            carry = number/10;
            ans.push_back(digit);
            index--;
            k = k/10;
        }
        while(k){
            int number = carry + (k%10);
            int digit = number % 10;
            carry = number / 10;
            ans.push_back(digit);
            k = k/10;
        }
        if(carry){
            ans.push_back(carry);
        }
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
       //  int sum = 0;
       //  for(int i=0; i<num.size(); i++){
       //      sum = sum*10 + num[i];
       //  }
       // int total = sum+k;
        
        vector<int>ans;
        solve(num,k,0,ans);
        reverse(ans.begin(), ans.end());
        return ans;
        
            
    }
};