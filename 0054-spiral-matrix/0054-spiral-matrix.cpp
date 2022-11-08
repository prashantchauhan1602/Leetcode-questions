class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; 
        int row = matrix.size() ;
        int col = matrix[0].size() ;
        
        int starting_row = 0 ;
        int ending_row = row -1 ;
        int starting_col = 0 ;
        int ending_col = col - 1 ;
        
        // int total = row * col ;
        // int count = 0 ;
        
        while(starting_row <= ending_row && starting_col <= ending_col)
        {
            for(int i = starting_col ; i <= ending_col ; i++)
            {
                ans.push_back(matrix[starting_row][i]) ;
                // count++ ;
            }
            starting_row++ ;
            
            for(int i = starting_row ; i <= ending_row ; i++ )
            {
                ans.push_back(matrix[i][ending_col]) ;
                // count++ ;
            }
            ending_col-- ;
            
            for(int i = ending_col ; i >= starting_col && starting_row <= ending_row; i--)
            {
                ans.push_back(matrix[ending_row][i]) ;
                // count++ ;
            }
            ending_row-- ;
            
            for(int i = ending_row ; i >= starting_row  && starting_col <= ending_col ; i--)
            {
                ans.push_back(matrix[i][starting_col]) ;
                // count++ ;
            }
            starting_col++ ;
        }
        return ans ;
    }
};