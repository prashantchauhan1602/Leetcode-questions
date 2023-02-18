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
    vector<int> ans ;
    vector<int> rightSideView(TreeNode* root) {
        map<int , int> topnode ;
        queue<pair<TreeNode* , int>> qs ;
        if(root == NULL)
        {
            return ans ;
        }
        
        qs.push(make_pair(root , 0)) ;
        while(!qs.empty())
        {
            pair<TreeNode* , int> temp = qs.front() ;
            TreeNode* frontNode = temp.first ;
            qs.pop() ;
            int hd = temp.second ;
            
            topnode[hd] = frontNode -> val;
            
            if(frontNode -> left)
            {
                qs.push(make_pair(frontNode -> left , hd + 1)) ;
            }
            
            if(frontNode -> right)
            {
                qs.push(make_pair(frontNode -> right , hd + 1)) ;
            }
        }
        for(auto i: topnode)
        {
            ans.push_back(i.second) ;
        }
        return ans ;
    }
};