class Solution {
public:
    
    unordered_map<int,bool>rowCheck;
    unordered_map<int,bool> upperLeftDiagonal;
    unordered_map<int, bool> bottomLeftDiagonal;
    
    bool isSafe(vector<vector<string>>&board,int row,int col,int n){
        // upper diagonal...
        // int i=row;
        // int j=col;
        // while(i>=0 && j>=0){
        //     if(board[i][j] == "Q"){
        //         return false;
        //     }
        //     i--;
        //     j--;
        // }
        
        //  left part..
        // i=row;
        // j=col;
        // while(j >= 0){
        //     if(board[i][j] == "Q"){
        //         return false;
        //     }
        //     j--;
        // }
        
        // lower triangle
//         i=row;
//         j=col;
//         while(i < n && j>=0){
//             if(board[i][j] == "Q"){
//                 return false;
//             }
//             i++;
//             j--;
//         }
        
//         return true;
        
//         Second Approach...
        
        if(rowCheck[row] == true){
            return false;
        }
        if(upperLeftDiagonal[n-1+col-row] == true){
            return false;
        }
        if(bottomLeftDiagonal[row+col] == true){
            return false;
        }
        return true;
    }
   
    
   void addSol(vector<vector<string>>&board, int n, vector<vector<string>>&ans){
        vector<string>temp;
        
        for(int i=0; i<n; i++){
            string str = "";
            for(int j=0; j<n; j++){
                str += board[i][j];
            }
            temp.push_back(str);
        }
        ans.push_back(temp);
    }
    
    void solve(vector<vector<string>>&board, int col, vector<vector<string>>&ans, int n){
        if(col >= n){
            addSol(board, n, ans);
            return ;
        }
        
        for(int row=0; row < n; row++){
//             if(isSafe(board, row, col,n)){
//                 board[row][col] = 'Q';
                
            
//                 solve(board,col+1,ans,n);
            
//                 board[row][col] = '.';
//             }
            
            if(isSafe(board,row,col,n)){
                board[row][col] = 'Q';
                rowCheck[row] = true;
                upperLeftDiagonal[n-1+col-row] = true;
                bottomLeftDiagonal[row+col] =true;
                
                solve(board,col+1,ans,n);
                
                board[row][col] = '.';
                rowCheck[row] = false;
                upperLeftDiagonal[n-1+col-row] = false;
                bottomLeftDiagonal[row+col] =false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<string>> board(n, vector<string>(n,"."));
        int col = 0;
        solve(board, col, ans, n);
        return ans;
    }
};