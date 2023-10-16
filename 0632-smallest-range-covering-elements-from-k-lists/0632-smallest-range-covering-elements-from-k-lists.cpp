class Node{
    public:
    int data;
    int row;
    int index;
    Node(int value,int r, int idx){
        data = value;
        row = r;
        index = idx;
        
    }
};

class Compare{
    public:
    bool operator()(Node* a1, Node* a2){
        return a1->data > a2->data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int>ans;
        priority_queue<Node* , vector<Node*>, Compare> minHeap;
        int k= nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0; i<k; i++){
            int Ele = nums[i][0];
            maxi = max(Ele, maxi);
            mini = min(Ele, mini);
            minHeap.push(new Node(Ele, i, 0));
        }
        
        int ansStart=mini;
        int ansEnd=maxi;
        while(!minHeap.empty()){
            Node* temp = minHeap.top();
            int ele_val = temp->data;
            int curr_row = temp->row;
            int idx = temp->index;
            minHeap.pop();
            
            // cout << curr_row << idx << endl;
            mini = ele_val;
            
            int currRange = ansEnd - ansStart;
            int range = maxi - mini;
            
            if(currRange > range){
                ansStart = mini;
                ansEnd = maxi;
            }
            
            if(idx+1 < nums[curr_row].size()){
                maxi = max(maxi, nums[curr_row][idx+1]);
                minHeap.push(new Node(nums[curr_row][idx+1],curr_row,idx+1));
            }
            else{
                break;
            }
        }
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
};