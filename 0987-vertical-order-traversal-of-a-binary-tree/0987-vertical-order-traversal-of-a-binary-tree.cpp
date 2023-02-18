/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>> nodes ;
        queue<pair<TreeNode* , pair<int , int> >> qs ;
        vector<vector<int>> ans ;
        
        if(root == NULL)
        {
            return ans ;
        }
        qs.push(make_pair(root , make_pair(0 , 0))) ;
        while(!qs.empty())
        {
            pair<TreeNode* , pair<int , int> > temp = qs.front() ;
            qs.pop() ;
            TreeNode* frontNode = temp.first ;
            int hd = temp.second.first ;
            int lvl = temp.second.second ;
            
            // vector<int> list(len) ;
            nodes[hd][lvl].insert(frontNode -> val) ;
            // nodes.push_back(list) ;
            
            if(frontNode -> left)
            {
                qs.push(make_pair(frontNode -> left , make_pair(hd-1 , lvl+1))) ;
            }
            
            if(frontNode -> right)
            {
                qs.push(make_pair(frontNode -> right , make_pair(hd+1 , lvl+1))) ;
            }
        }
        
        for(auto i:nodes)
        {
            vector<int>result ;
            for(auto j:i.second)
            {
                for(auto k : j.second)
                {
                    result.push_back(k) ;
                }
            }
            ans.push_back(result) ;
        }
        return ans ;
    }
};