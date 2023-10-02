//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        int ans = INT_MAX;
        int row = 0;
        for(int i=0; i<N; i++){
            int ones = 0;
            for(int j=0; j<M; j++){
                if(A[i][j] == 1){
                    ones++;
                }
            }
            if(ones < ans){
                ans = ones;
                row = i+1;
            }
        }
        return row;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends