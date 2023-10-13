class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        if(nums[0] < nums[size-1]){
            count++;
        }
        for(int i=1; i<size; i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
        }
        if(count <= 1){
            return true;
        }
        else{
            return false;
        }
    }
};