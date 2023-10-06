class Solution {
public:
    
    void solve(string&num1, int p1, string&num2, int p2 , string& ans , int carry){
        
        if(p1 < 0 && p2 < 0){
            if(carry){
                ans.push_back(carry+'0');
            }
            return;
        } 
        
        
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        
        int number = n1 + n2 + carry;
        int digit = number % 10;
        carry = number / 10;
        
        ans.push_back(digit + '0');
        
        solve(num1, p1-1, num2, p2-1, ans, carry);
    }
    string addStrings(string num1, string num2) {
        int p1=num1.size()-1;
        int p2=num2.size()-1;
        int carry = 0;
        string ans="";
        solve(num1, p1, num2, p2, ans, carry);
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};