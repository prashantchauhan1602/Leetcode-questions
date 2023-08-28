//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    bool isSafe(vector<vector<int>> &m, int newx , int newy, int &n, vector<vector<bool>> &visited){
        
        if( (newx >= 0 && newx <n) && (newy >=0 && newy < n) && (m[newx][newy] != 0) && (visited[newx][newy] != 1)){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, vector<string>&ans, int x, int y, string path, int &n, vector<vector<bool>>&visited){
        
        // Base Case...
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        
        // Movement : D , L , R , U...
        
        if(isSafe(m, x+1, y, n, visited)){
            visited[x][y] = 1;
            solve(m, ans,  x+1, y, path + 'D',n,visited);
            visited[x][y] = 0;
        }
        
        if(isSafe(m, x, y-1, n, visited)){
            visited[x][y] = 1;
            solve(m, ans,  x, y-1, path + 'L', n, visited);
            visited[x][y] = 0;
        }
        
        if(isSafe(m, x, y+1, n, visited)){
            visited[x][y] = 1;
            solve(m, ans,  x, y+1, path + 'R', n, visited);
            visited[x][y] = 0;
        }
        
        if(isSafe(m, x-1, y, n, visited)){
            visited[x][y] = 1;
            solve(m, ans,  x-1, y, path + 'U', n, visited);
            visited[x][y] = 0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        vector<vector<bool>>visited(n, vector<bool>(n,0));
        
        string path = "";
        
        if(m[0][0] == 0){
            return ans;
        }
        solve(m, ans, 0 , 0, path,n, visited);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends