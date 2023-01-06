class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size() ;
        int row = matrix.size() ;
        int start = 0 ; 
        int end = col - 1 ;
        
        int smallest = matrix[0][0] ;
        int largest = matrix[row-1][col-1] ;
        if(target < smallest || target > largest)
        {
            return false ;
        }
        
        while(start < row && end >= 0)
        {
            if(matrix[start][end] == target)
            {
                return true ;
            }
            else if(matrix[start][end] > target)
            {
                end-- ;
            }
            else{
                start++ ;
            }
        }
        return false ;
    }
};