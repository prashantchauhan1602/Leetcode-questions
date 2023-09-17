class Solution {
public:
    int firstOcc(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int start = 0;
        int end = size - 1;
        int ans=-1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }  
        }
        return ans;
    }
    
    int lastOcc(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int start = 0;
        int end = size - 1;
        int ans=-1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }  
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        int first = firstOcc(nums,target);
        int last = lastOcc(nums,target);
        cout << first << last << endl;
        
        vector<int>ans;
        if(first == -1 && last == -1){
            return ans;
        }
        
            while(first <= last){
                ans.push_back(first);
                first++;
            }
        
        return ans;
    }
};