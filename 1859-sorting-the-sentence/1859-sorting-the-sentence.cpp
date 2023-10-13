class Solution {
public:
    string sortSentence(string s) {
//         int size = s.size();
//         vector<string>mapping(size);
//         string temp = "";
//         string output;
        
//         for(int i=0; i<size; i++){
            
//             if(isalpha(s[i])){
//                 temp.push_back(s[i]);
//             }
            
//             if(isdigit(s[i])){
//                 int digit = s[i] - '0';
//                 if(temp != ""){
//                     mapping[digit] = temp;
//                 }
//                 temp = "";
//             }
//         }
        
//         for(int i=0; i<size; i++){
//             if(mapping[i].size() > 0){
//                 output +=mapping[i];
//                 output += ' ';
                
//             }
//         }
//         output.pop_back();
//         return output;
        
        string output = "";
        string temp="";
        int size = s.size();
        vector<pair<int,string>>pair;
        for(int i=0; i<size; i++){
            if(isalpha(s[i])){
                temp.push_back(s[i]);
            }
            
            if(isdigit(s[i])){
                int digit = s[i] - '0';
                // if(temp != ""){
                //     mapping[digit] = temp;
                // }
                pair.push_back({digit, temp});
                temp = "";
            }
        }
        sort(pair.begin(), pair.end());
        
        for(auto it:pair){
            output +=it.second;
            output +=' ';
        }
        output.pop_back();
        return output;
    }
};