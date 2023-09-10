//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int size = intervals.size();
        
        vector<vector<int>>ans;
        
        
        for(int i=0; i<size; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back({start,end});
            }
            
            else{
                if(ans.back()[1] >= intervals[i][0]){
                    ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends