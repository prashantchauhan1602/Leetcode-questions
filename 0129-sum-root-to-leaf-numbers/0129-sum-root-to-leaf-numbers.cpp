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


void solve(TreeNode* root , int& sum ,  int number)
    {
        if(root == NULL)
        {
            return ;
        }
        number = number *10 + root->val ;
        
        if(root -> left == NULL && root -> right == NULL)
        {
            sum = sum + number ;
            return ;
        }
        
        solve(root -> left , sum , number) ;
        solve(root -> right , sum , number) ;
    }
    
    int sumNumbers(TreeNode* root) {
        int sum = 0 ;
        int num = 0 ;
        solve(root , sum , num) ;
        return sum ;
    }
};