class Solution {
public:
    void removeOccRE(string &s, string &part){
        int found = s.find(part);
        
        if(found != string::npos){
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(), s.size());
            s = left_part + right_part;
            
            removeOccRE(s,part);
        }
        else{
            return;
        }
    }
    
    string solve(string s, string part){
        
        int index = s.find(part);
        while(index != -1){
            s.erase(index, part.length());
            index = s.find(part);
        }
        
        return s;
    }
    string removeOccurrences(string s, string part) {
        // removeOccRE(s,part);
        return solve(s,part);
        // return s;
    }
};