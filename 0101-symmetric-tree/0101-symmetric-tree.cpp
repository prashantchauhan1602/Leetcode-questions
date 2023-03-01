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
    bool Symmetry(TreeNode* root1 , TreeNode* root2)
    {
        if(root1 == NULL && root2 == NULL)
        {
            return true ;
        }
        if(root1 != NULL && root2 == NULL)
        {
            return false ;
        }
        if(root1 == NULL && root2 != NULL)
        {
            return false ;
        }
        if(root1 -> val != root2 -> val)
        {
            return false ;
        }
        bool lefty = Symmetry(root1 -> left  , root2 -> right) ;
        bool righty = Symmetry(root1 -> right , root2 -> left) ;
        if(lefty == false || righty == false)
        {
            return false ;
        }
        return true ;
    }
    bool isSymmetric(TreeNode* root) {
        // TreeNode* lefty = root ;
        // TreeNode* righty = root ;
        return Symmetry(root -> left , root -> right) ;
    }
};