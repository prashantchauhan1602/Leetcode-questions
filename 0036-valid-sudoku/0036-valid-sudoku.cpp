class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board,int row, int col,int digit){
        // Row check...
        int r_count = 0;
        for(int i=0; i<9; i++){
            if(board[row][i] == digit){
                r_count++;
            }
        }
        
        // Col count...
        int c_count = 0;
        for(int i=0; i<9; i++){
            if(board[i][col] == digit){
                c_count++;
            }
        }
        
        // Diagonal Check...
        int d_count = 0;
        for(int i=0; i<9; i++){
            if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == digit){
                d_count++;
            }
        }
        
        if(r_count > 1 || c_count > 1 || d_count > 1){
            return false;
        }
        else{
            return true;
        }
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(isdigit(board[i][j])){
                    int digit = board[i][j];
                    bool ans = isSafe(board,i,j,digit);
                    if(ans == false){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};