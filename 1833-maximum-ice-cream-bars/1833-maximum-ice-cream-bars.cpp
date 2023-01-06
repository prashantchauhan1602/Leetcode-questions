class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int size = costs.size() ;
        sort(costs.begin() , costs.end()) ;
        int sum = 0 ;
        if(costs[0] > coins)
        {
            return 0 ;
        }
        for(int index = 0 ; index < size ; index++)
        {
            if(coins - costs[index] >= 0)
            {
                coins = coins - costs[index] ;
                sum++;
            }      
        } 
        return sum ;
    }
};