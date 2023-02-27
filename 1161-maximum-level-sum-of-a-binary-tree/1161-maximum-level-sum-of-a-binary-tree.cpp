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
    vector<vector<int>> levelOrderTraversal(TreeNode* root)
    {
        vector<vector<int>>result ;
        queue<TreeNode*> qs ;
        qs.push(root) ;
        while(!qs.empty())
        {
            int sum = 0 ;
            int size = qs.size() ;
            vector<int> list;
            while(size > 0)
            {
                
                TreeNode* front = qs.front() ;
                qs.pop() ;
                list.push_back(front -> val) ;
            
                if(front -> left)
                {
                    qs.push(front -> left) ;
                }
            
                if(front -> right)
                {
                    qs.push(front -> right) ;
                }
                size-- ;
            }
            result.push_back(list) ;
        }
        return result ;
    }
    
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>> res ;
        res = levelOrderTraversal(root) ;
        int ans = INT_MIN ;
        int index = -1 ;
        for(int i = 0 ; i< res.size() ; i++)
        {
            int sum = 0 ;
            for(int j = 0 ; j < res[i].size() ; j++)
            {
                sum = sum + res[i][j] ; 
            }
            if(sum > ans)
            {
                ans = sum ;
                index = i ;
            }
        }
        return (index+1) ;
    }
};