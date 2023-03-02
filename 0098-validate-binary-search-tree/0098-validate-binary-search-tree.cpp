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
    void inorderTraversal(TreeNode* root , vector<int> &ans)
    {
        if(root == NULL)
        {
            return ;
        }
        inorderTraversal(root -> left , ans);
        ans.push_back(root -> val) ;
        inorderTraversal(root -> right , ans) ;
    }
    
    bool validate(TreeNode* root ,long mini , long maxi)
    {
        if(root == NULL)
        {
            return true ;
        }
        
        if(root -> val <= mini || root -> val >= maxi)
        {
            return false ;
        }
        
        bool leftside = validate(root -> left , mini , root -> val) ;
        bool rightside = validate(root -> right , root -> val , maxi);
        return (leftside && rightside) ;
    
    }
    
    bool isValidBST(TreeNode* root) {
        // int mini = INT_MIN ;
        // int maxi = INT_MAX ;
        
        return validate(root ,LONG_MIN ,LONG_MAX) ;
        
        // vector<int> ans ;
        // inorderTraversal(root , ans) ;
        // for(int i = 0 ; i < ans.size() -1 ; i++)
        // {
        //     if(ans[i] >= ans[i+1])
        //     {
        //         return false ;
        //     }
        // }
        // return true ;
    }
};