class Solution {
public:
    
    void solveByString(string s, string&res){
        int size = s.size();
        for(int i=0;i<size;i++){
            if(res.size() == 0 || res.back() != s[i]){
                res.push_back(s[i]);
            }
            else{
                res.pop_back();
            }
        }
    }
    
    string removeDuplicates(string s) {
//         stack<char>st;
//         st.push(s[0]);
//         for(int i=1;i<s.size();i++){
//             if(st.empty()){
//                 st.push(s[i]);
//             }
//             else if(st.top() != s[i]){
//                 st.push(s[i]);
//             }
//             else{
//                 st.pop();
//             }
//         }
        
//         string res="";
//         while(!st.empty()){
//             res.push_back(st.top());
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
        
        
        string res;
        solveByString(s, res);
        return res;
    }
};