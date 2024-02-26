class Solution {
public:
    string reorderSpaces(string text) {
        
        int calc_space=0;
        int word_count=0;
        string ans;
        
        stringstream ss(text);
        string word;
        while(ss >> word){
            word_count++;
        }
        
        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                calc_space++;
            }
        }
        
        int space_divide;
        if(word_count == 1){
            space_divide = calc_space/2;
        }
        else{
            space_divide = calc_space / (word_count-1);
        }
        
        bool isAlpha = false;
        for(int i=0;i<text.size();i++){
            
            if(isalpha(text[i])){
                ans.push_back(text[i]);
                isAlpha = true;
            }
            else if(isAlpha){
                for(int i=0;i<space_divide && calc_space > 0 ;i++){
                    ans.push_back(' ');
                    calc_space--;
                    isAlpha = false;
                }
            }
        }
        while(calc_space){
            ans.push_back(' ');
            calc_space--;
        }
        return ans;
        
    }
};