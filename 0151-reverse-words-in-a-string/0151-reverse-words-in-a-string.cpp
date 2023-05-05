class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        string str = "" ;
        vector<string>res ;
        for(int i = len-1 ; i >= 0 ; i--){
            if(s[i] != ' ')
            {
                str = str + s[i];
            }
            else{
                reverse(str.begin() , str.end());
                res.push_back(str);
                str = "";
            }
        }
        string ans = "";
        for(int i = 0 ; i < res.size(); i++)
        {
            ans = ans + res[i];
            // cout << ans ;
            ans = ans + ' ';
            
        }
        if(str.size() != 0)
        {
            reverse(str.begin() , str.end());
            ans = ans + str ;
        }
        string st="";
        int s_indx = 0 ; 
        while(ans[s_indx] == ' '){
            s_indx++ ;
        }
        int e_indx = ans.length()-1 ; 
        while(ans[e_indx] == ' '){
            e_indx-- ;
        }
        for(int i=s_indx ; i <= e_indx ; i++){
            st = st + ans[i];
        }
        string finalstr="";
        for(int i = 0 ; i < st.size() ; i++)
        {
            if(st[i]!=' '){
                finalstr = finalstr+st[i];
            }
            else{
                while(st[i] == ' '){
                    i++;
                }
                finalstr = finalstr + ' ';
                i-- ;
            }
        }
        return finalstr ;
    }
};