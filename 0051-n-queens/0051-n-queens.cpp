class Solution {
public:
    bool isSafe(vector<string>&board,int row,int col,int n){
        // upper diagonal...
        int i=row;
        int j=col;
        while(i>=0 && j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            i--;
            j--;
        }
        
        //  left part..
        i=row;
        j=col;
        while(j >= 0){
            if(board[i][j] == 'Q'){
                return false;
            }
            j--;
        }
        
        // lower triangle
        i=row;
        j=col;
        while(i < n && j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
    
    void addSol(vector<string>&board, int n, vector<vector<string>>&ans){
        vector<string>temp;
        for(int i=0; i<n; i++){
            temp.push_back(board[i]);
        }
        ans.push_back(temp);
    }
    
    void solve(vector<string>&board, int col, vector<vector<string>>&ans, int n){
        if(col >= n){
            addSol(board, n, ans);
            return ;
        }
        
        for(int row=0; row < n; row++){
            if(isSafe(board, row, col,n)){
                board[row][col] = 'Q';
            
                solve(board,col+1,ans,n);
            
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string str="";
        vector<vector<string>>ans;
        for(int i=0; i<n; i++){
            str += '.' ;
        }
        vector<string> board(n,str);
        int col = 0;
        solve(board, col, ans, n);
        return ans;
    }
};