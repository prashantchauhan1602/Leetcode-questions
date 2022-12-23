class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int starting_row = 0 ;
        int ending_row = n - 1 ;
        int starting_col = 0 ;
        int ending_col = n - 1 ;
        
        vector<vector<int>> arr (n , vector<int> (n , 0));

        int value = 1;
        int total = n * n ;
        
        while(starting_row <= ending_row && starting_col  <= ending_col && value <= total)
        {
            for(int i = starting_col ; i <= ending_col ; i++)
            {
                arr[starting_row][i] = value++ ;
            }
            starting_row++ ;
            
            for(int i = starting_row ; i <= ending_row ; i++)
            {
                arr[i][ending_col] = value++ ;
            }
            ending_col-- ;
            
            if(starting_row < ending_row && starting_col < ending_col)
            {
                for(int i = ending_col ; i >= starting_col ; i--)
                {
                    arr[ending_row][i] = value++ ;
                }
                ending_row-- ;
            
                for(int i = ending_row ; i >= starting_row ; i--)
                {
                    arr[i][starting_col] = value++ ;
                }
                starting_col++ ;
            }
        }
        return arr ;
        
       
    }
};