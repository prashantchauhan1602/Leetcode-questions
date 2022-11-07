//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int len = n ;
        int zerocount = 0 ;
        int onecount = 0 ;
        int twocount = 0 ;
        
        for(int i = 0 ; i < len ; i++)
        {
            if(a[i] == 0)
            {
                zerocount++ ;
            }
            else if(a[i] == 1){
                onecount++ ;
            }
            else{
                twocount++ ;
            }
        }
        
        for(int i = 0 ; i < len ; i++)
        {
            if(zerocount > 0)
            {
                a[i] = 0 ;
                zerocount-- ;
            }
            
            else if(onecount > 0)
            {
                a[i] = 1 ;
                onecount-- ;
            }
            else{
                a[i] = 2 ;
                twocount-- ;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends