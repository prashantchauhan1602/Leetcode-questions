//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        int s_row = 0;
        int e_row = n-1;
        int s_col = 0;
        int e_col = m-1;
        
        vector<int>ans;
        
        for(int i=s_col; i<=e_col; i++){
            ans.push_back(matrix[s_row][i]);
        }
        s_row++;
            
        for(int i=s_row; i<=e_row; i++){
            ans.push_back(matrix[i][e_col]);
        }
        e_col--;
            
        for(int i=e_col; i>=s_col && s_row <= e_row; i--){
            ans.push_back(matrix[e_row][i]);
        }
        e_row--;
            
        for(int i=e_row; i>=s_row && s_col <= e_col; i--){
            ans.push_back(matrix[i][s_col]);
        }
            
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends