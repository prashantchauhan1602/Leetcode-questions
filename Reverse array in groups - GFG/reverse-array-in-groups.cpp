//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
#include<stack>
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        stack<long long> st ;
        // st.push(3) ;
        // while(st.size() != 0)
        // {
        //     cout << st.top() << " " ;
        //     st.pop() ;
        // }
        vector<long long> ans;
        int step = 1 ;
        for(int i = 0 ; i < n ; i++)
        {
            
                st.push(arr[i]) ;
                step++ ;
                
                if(st.size() % k == 0)
                {
                    while(st.size() != 0)
                    {
                        // int val = st.pop() ;
                        ans.push_back(st.top()) ;
                        st.pop() ;
                    }
                }

        }
        
        while(st.size() != 0)
        {
            ans.push_back(st.top()) ;
            st.pop() ;
        }
        for(int i = 0 ; i < ans.size() ; i++)
        {
            arr[i] = ans[i] ;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends