class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int row = nums.size();
        int col = nums[0].size();
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        }
        for(int i=0; i<col;i++){
            int maxi = INT_MIN;
            for(int j=0; j<row; j++){
                if(nums[j][i] > maxi){
                    maxi = nums[j][i];
                }
            }
            cout << maxi << " ";
            sum += maxi;
        }
        
        return sum;
    }
};