class Solution {
public:
    
    // Comparator...
    static string comp;
    static bool compare(char char1, char char2){
        return comp.find(char1) < comp.find(char2);
    }
    
    string customSortString(string order, string s) {
        
        comp = order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};

string Solution::comp;