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
    void height(TreeNode* root , int &ans , int level)
    {
        if(root == NULL)
        {
            return ;
        }
         if(root -> left == NULL && root -> right == NULL)
         {
            ans = min(ans , level) ;
            return ;
         }
        
        height(root ->left , ans , level + 1) ;
        height(root -> right , ans , level + 1) ;
    }
    int minDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0 ;
        }
       int ans = INT_MAX ;
        int level = 0 ;
        height(root , ans , level) ;
        return (ans +1);
    }
};