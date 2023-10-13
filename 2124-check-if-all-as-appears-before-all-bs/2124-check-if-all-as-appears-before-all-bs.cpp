class Solution {
public:
    bool checkString(string s) {
        int size = s.size();
        int ans = -1;
        for(int i=0; i<size; i++){
            if(s[i] == 'b'){
                ans = i;
                break;
            }
        }
        
        if(ans == -1){
            return true;
        }
        else{
            for(int i=ans; i<size; i++){
                if(s[i] == 'a'){
                    return false;
                }
            }
            return true;
        }
    }
};