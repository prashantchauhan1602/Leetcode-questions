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
    TreeNode* mirror(TreeNode* root)
    {
        TreeNode* curr = root ;
        if(curr == NULL)
        {
            return curr ;
        }
      
        TreeNode* temp = curr -> left ;
        curr -> left = curr -> right ;
        curr -> right = temp ;
        
        mirror(curr -> right) ;
        mirror(curr -> left) ;
        return root ;
    }
    TreeNode* invertTree(TreeNode* root) {
        return mirror(root) ;
    }
};