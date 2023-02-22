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
    int findPos(vector<int> inorder , int element)
    {
        int len = inorder.size() ;
        for(int i = 0 ; i  < len ; i++)
        {
            if(inorder[i] == element)
            {
                return i ;
            }
        }
        return -1 ;
    }
    
    TreeNode* solve(vector<int> inorder , vector<int>postorder , int &index , int inorderStart , int inorderEnd , int n)
    {
        if(index < 0 || inorderStart > inorderEnd)
        {
            return NULL ;
        }
        
        int element = postorder[index--] ;
        TreeNode* root = new TreeNode(element) ;
        int pos = findPos(inorder , element) ;
        
        root -> right = solve(inorder , postorder , index, pos+1 , inorderEnd , n) ;
        root -> left = solve(inorder , postorder , index, inorderStart , pos-1 , n) ;
        
        return root ;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size() ;
        int postorderIndex = n - 1 ;
        TreeNode* result = solve(inorder , postorder , postorderIndex , 0 , n -1 , n) ;
        return result ;
    }
};