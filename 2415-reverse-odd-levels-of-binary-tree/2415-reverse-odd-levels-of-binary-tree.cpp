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
    TreeNode* mirror(TreeNode* root1)
    {
        int level = 0 ;
        queue<TreeNode*> qs ;
        vector<int> values ;
        qs.push(root1) ;
        while(!qs.empty())
        {
            int size = qs.size() ;
            vector<int> temp ;
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* front = qs.front() ;
                qs.pop() ;
                
                if(level % 2 != 0)
                {
                    front -> val = values[size - i -1] ;
                }
                if(front -> left)
                {
                    qs.push(front -> left) ;
                    temp.push_back(front -> left -> val) ;
                }
                if(front -> right)
                {
                    qs.push(front -> right) ;
                    temp.push_back(front -> right -> val) ;
                }
            }
            values = temp ;
            level++ ;
        }
        return root1 ;
        
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        return mirror(root) ;
    }
};