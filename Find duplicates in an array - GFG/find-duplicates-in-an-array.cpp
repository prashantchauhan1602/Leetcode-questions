//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        map<int,int>map;
        vector<int>ans;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        
        for(auto it:map){
            if(it.second >= 2){
                ans.push_back(it.first);
            }
        }
        
        if(ans.size() > 0){
            return ans;
        }
        else{
            ans.push_back(-1);
            return ans;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends