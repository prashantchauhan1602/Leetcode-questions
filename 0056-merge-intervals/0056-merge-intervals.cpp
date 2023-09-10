class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        
        for(int i=0; i<size; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            
            for(int j=i+1; j<size; j++){
                if(intervals[j][0] <= end){
                    end = max(intervals[j][1], end);
                }
                else{
                    break;
                }
            }
            
            ans.push_back({start,end});
            
//             if(ans.empty() || ans.back()[1] < intervals[i][0]){
//                 ans.push_back(intervals[i]);
//             }
            
//             else{
//                 if(ans.back()[1] >= intervals[i][0]){
//                     ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//                 }
//             }
        }
        return ans;
    }
};