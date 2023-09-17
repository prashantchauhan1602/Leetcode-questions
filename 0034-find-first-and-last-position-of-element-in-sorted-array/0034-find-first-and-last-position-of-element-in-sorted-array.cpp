class Solution {
public:
    int findFirstOcc(vector<int>& nums, int target){
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]== target){
                ans = mid;
                end = mid -1;
            }
            else if(nums[mid] < target){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int findLastOcc(vector<int>& nums, int target){
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]== target){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirstOcc(nums,target);
        int last = findLastOcc(nums,target);
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};