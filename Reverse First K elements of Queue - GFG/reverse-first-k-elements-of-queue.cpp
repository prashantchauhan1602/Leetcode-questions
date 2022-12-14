//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    int size = q.size() ;
    stack<int> st ;
    queue<int> qs ;
    for(int i = 0 ; i < k ; i++)
    {
        int top = q.front() ;
        st.push(top) ;
        q.pop() ;
    }
    
    while(!st.empty())
    {
        int front = st.top() ;
        qs.push(front) ;
        st.pop() ;
    }
    
    for(int i = k ; i < size ; i++)
    {
        int top = q.front() ;
        qs.push(top) ;
        q.pop() ;
    }
    return qs ;
}