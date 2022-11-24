//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    long long int size = N ;
    deque<long long int> qs ;
    vector<long long int> ans ;
    for(int i = 0 ; i < K ; i++)
    {
        if(A[i] < 0)
        {
            qs.push_back(i) ;
        }
    }
    
    //Storing ans of first k size window...
    if(qs.size() > 0)
    {
        ans.push_back(A[qs.front()]) ;
    }
    else{
        ans.push_back(0) ;
    }
    
    for(int i = K ; i  < size ; i++)
    {
        // cout << A[qs.front()] << "  " << endl; 
        // Deletion part...
        if(!qs.empty() && i - qs.front() >= K)
        {
            qs.pop_front() ;
        }
        // Addition of next element...
        if(A[i] < 0)
        {
            qs.push_back(i) ;
        }
        // Storing the answer of remainning part...
        if(qs.size() > 0)
        {
            ans.push_back(A[qs.front()]) ;
        }
        else{
            ans.push_back(0) ;
        }
    }
    return ans ;
 }