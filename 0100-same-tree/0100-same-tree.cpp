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
    bool Same(TreeNode* p , TreeNode* q)
    {
        if(p == NULL && q == NULL)
        {
            return true  ;
        }
        if(p != NULL && q == NULL)
        {
            return false ;
        }
        if(p == NULL && q != NULL)
        {
            return false ;
        }
        if(p -> val != q -> val)
        {
            return false ;
        }
        
        bool lefty = Same(p -> left , q -> left) ;
        bool righty = Same(p -> right , q -> right) ;
        if(!lefty || !righty)
        {
            return false ;
        }
        return true ;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return Same(p , q) ;
    }
};