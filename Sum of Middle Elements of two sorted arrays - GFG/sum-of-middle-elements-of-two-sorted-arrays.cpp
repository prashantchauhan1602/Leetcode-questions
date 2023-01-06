//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
        int start1 = 0 ;
        int start2 = 0 ;
        int end1 = n - 1 ;
        int end2 = n - 1 ;
        vector<int> ans ;
        while(start1 <= end1 && start2 <= end2)
        {
            if(ar1[start1] <= ar2[start2])
            {
                ans.push_back(ar1[start1]) ;
                start1++ ;
            }
            else{
                ans.push_back(ar2[start2]) ;
                start2++ ;
            }
        }
        while(start1 <= end1)
        {
            ans.push_back(ar1[start1]) ;
            start1++ ;
        }
        while(start2 <= end2)
        {
            ans.push_back(ar2[start2]) ;
            start2++ ;
        }
        int mid = ans.size() / 2 ;
        int sum = ans[mid] + ans[mid - 1] ;
        return sum ;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends