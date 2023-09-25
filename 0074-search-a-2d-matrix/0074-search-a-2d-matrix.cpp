class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        
        int start=0;
        int end=total-1;
        
        while(start<=end){
            int mid= start + (end-start)/2;
            int rowIdx = mid/col;
            int colIdx = mid%col;
            
            if(matrix[rowIdx][colIdx] == target){
                return true;
            }
            else if(matrix[rowIdx][colIdx] > target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};