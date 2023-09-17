class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();
        int start = 0;
        int end = size - 1;
        int ans;
        while(start < end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                ans = mid;
                return ans;
            }
            
            else if(arr[mid] < arr[mid+1]){
                start = mid;
            }
            else{
                end = mid;
            }
        }
        return ans;
    }
};