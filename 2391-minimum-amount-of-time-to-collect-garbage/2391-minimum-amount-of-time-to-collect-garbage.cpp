class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int pickP = 0;
        int pickG = 0;
        int pickM = 0;
        
        int travelP = 0;
        int travelM = 0;
        int travelG = 0;
        
        int lastP = 0;
        int lastM = 0;
        int lastG = 0;
        
        for(int i=0;i<garbage.size();i++){
            string str = garbage[i];
            for(int j=0;j<str.size();j++){
                
                if(str[j] == 'P'){
                    pickP++;
                    lastP = i;
                }
                else if(str[j] == 'G'){
                    pickG++;
                    lastG = i;
                }
                else{
                    pickM++;
                    lastM = i;
                }
            }
        }
        
        for(int i=0;i<lastP;i++){
            travelP += travel[i];
        }
        for(int i=0;i<lastG;i++){
            travelG += travel[i];
        }
        for(int i=0;i<lastM;i++){
            travelM += travel[i];
        }
        
        int total = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
        return total;
            
        
    }
};