//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int size = A.size() ;
		    unordered_map<char , int> count ;
		    queue<int> qs ;
		    string ans = "";
		    for(int i = 0 ; i < size ; i++)
		    {
		        char ch = A[i] ;
		        count[ch]++ ;
		        qs.push(ch) ;
		        
		        while(!qs.empty())
		        {
		            if(count[qs.front()] > 1)
		            {
		                qs.pop() ;
		            }
		            else{
		                ans.push_back(qs.front()) ;
		                break ;
		            }
		        }
		        if(qs.empty())
		        {
		            ans.push_back('#') ;
		        }
		    }
		    return ans ;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends