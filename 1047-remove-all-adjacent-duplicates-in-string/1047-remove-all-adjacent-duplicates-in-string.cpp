class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};