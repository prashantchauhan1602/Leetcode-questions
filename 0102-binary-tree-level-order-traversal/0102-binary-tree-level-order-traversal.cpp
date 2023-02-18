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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qs ;
        vector<vector<int>> ans ;
        
        if(root == NULL)
        {
            return ans ;
        }
        
        qs.push(root) ;
        while(!qs.empty())
        {
            int size = qs.size() ;
            vector<int> list;
            
            while(size > 0)
            {
                TreeNode* frontNode = qs.front() ;
                list.push_back(frontNode -> val) ;
                qs.pop() ;
            
                if(frontNode -> left)
                {
                    qs.push(frontNode -> left) ;
                }
                if(frontNode -> right)
                {
                    qs.push(frontNode -> right) ;
                }
                size-- ;
            }
            ans.push_back(list) ;
        }
        return ans ;
    }
};