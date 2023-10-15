class Solution {
public:
    string removeTrailingZeros(string num) {
        int end = num.size()-1;
        // string output="";
        // int index;
        // for(int i=end; i>=0; i--){
        //     if(num[i] != '0'){
        //         index = i;
        //         break;
        //     }
        // }
        // for(int i=0; i<=index; i++){
        //     output +=num[i];
        // }
        // return output;
        
        for(int i=end; i>=0; i--){
            if(num[i] == '0'){
                num.pop_back();
            }
            else{
                break;
            }
        }
        return num;
    }
};