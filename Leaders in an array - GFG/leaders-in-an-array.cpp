//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     int element = a[i] ;
        //     for(int j = i + 1 ; j < n ; j++)
        //     {
        //         if(element < a[j])
        //         {
        //             element = a[j] ;
        //             break ;
        //         }
        //     }
        //     if(element == a[i])
        //     {
        //         ans.push_back(a[i]) ;
        //     }
        // }
        
        vector<int> ans ;
        int end = n - 1 ;
        int end2 = end - 1 ;
        ans.push_back(a[end]) ;
        int maxi = a[end] ;
        for(int i = end2 ; i >= 0 ; i--)
        {
            if(maxi <= a[i])
            {
                ans.push_back(a[i]) ;
                maxi = a[i] ;
            }
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends