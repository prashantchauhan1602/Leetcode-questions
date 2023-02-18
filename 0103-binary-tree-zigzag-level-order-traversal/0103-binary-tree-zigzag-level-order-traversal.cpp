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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans ;
        queue<TreeNode*> qs ;
        if(root == NULL)
        {
            return ans ;
        }
        qs.push(root) ;
        bool leftToRight = true;
        
        while(!qs.empty())
        {
            int size = qs.size() ;
            vector<int> list(size) ;
            
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* frontNode = qs.front() ;
                qs.pop() ;
                int index = leftToRight ? i : (size - i - 1) ;
                list[index] = frontNode -> val ;
                
                if(frontNode -> left)
                {
                    qs.push(frontNode -> left) ;
                }
                
                if(frontNode -> right)
                {
                    qs.push(frontNode -> right) ;
                }
            }
            ans.push_back(list) ;
            leftToRight = !leftToRight ;
            cout << leftToRight ;
        }
        return ans ;
    }
};