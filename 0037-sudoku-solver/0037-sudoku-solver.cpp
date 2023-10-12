class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board, int row, int col, char value){
        
        //Row check...
        for(int i=0; i<9; i++){
            if(board[row][i] == value){
                return false;
            }
        }
            
        for(int i=0; i<9; i++){
            if(board[i][col] == value){
                return false;
            }
        }
        
        for(int i=0; i<9; i++){
            if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == value){
                return false;
            }
        }
        return true;  
    }
    bool solve(vector<vector<char>>& board, int row, int col){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    for(char ch='1'; ch <= '9'; ch++){
                        if(isSafe(board, i, j, ch)){
                            board[i][j] = ch;
                            bool nextAns = solve(board, i , j);
                            if(nextAns == true){
                                return true;
                            }
                            else{
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int col = 0;
        int row = 0;
        solve(board, row, col);
    }
};