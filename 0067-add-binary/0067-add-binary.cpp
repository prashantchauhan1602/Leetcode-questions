class Solution {
public:
    void solve(string&a, int p1, string&b, int p2, string&ans, int carry){
        
        if(p1 < 0 && p2 < 0){
            if(carry){
                ans.push_back(carry + '0');
            }
            return;
        }
        
        int n1 = (p1 >= 0 ? a[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? b[p2] : '0') - '0';
            
        int number = carry + n1 + n2;
       
        if(number % 2 == 0){
            ans.push_back('0');
            carry=number/2;
        }
        else{
            ans.push_back('1');
            carry = number / 2;
        }
        
        solve(a,p1-1,b,p2-1,ans,carry);
    }
    string addBinary(string a, string b) {
        string ans="";
        int p1=a.size()-1;
        int p2=b.size()-1;
        int carry = 0;
        solve(a,p1,b,p2,ans, carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};