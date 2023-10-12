/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int findMountainEle(MountainArray &mountainArr,int target, int start , int end){
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }
    
    int binarySearch(MountainArray &mountainArr, int start, int end, int target){
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(mountainArr.get(mid) == target){
                return mid;
            }
            
            else if(mountainArr.get(mid) > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
    
    int binarySearchReverse(MountainArray &mountainArr, int start, int end, int target){
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(mountainArr.get(mid) == target){
                return mid;
            }
            
            else if(mountainArr.get(mid) > target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int pvtIdx = findMountainEle(mountainArr,target,0,mountainArr.length()-1);
        cout << pvtIdx << endl;
        int i_idx = binarySearch(mountainArr,0,pvtIdx,target);
        int d_idx = binarySearchReverse(mountainArr,pvtIdx+1, mountainArr.length()-1,target);
        // cout << i_idx << " " << d_idx << endl;
        if(i_idx == -1 && d_idx != -1){
            return d_idx;
        }
        else if(i_idx != -1 && d_idx == -1){
            return i_idx;
        }
        else{
            return min(i_idx, d_idx);
        }
    }
};