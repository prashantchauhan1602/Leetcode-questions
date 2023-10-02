//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    
    void transpose(vector<vector<int>>&matrix , int n){
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
    }
    
    void rowChange(vector<vector<int>>&matrix, int n){
        int start = 0;
        int end = n-1;
        
        while(start < end){
            for(int i=0; i<n; i++){
                swap(matrix[start][i] , matrix[end][i]);
            }
            start++;
            end--;
        }
    }
    
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        transpose(matrix, n);
        rowChange(matrix,n);
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends