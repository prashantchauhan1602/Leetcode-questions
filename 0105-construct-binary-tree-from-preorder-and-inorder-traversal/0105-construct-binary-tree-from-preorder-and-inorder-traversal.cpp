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
    int findPos(vector<int>inorder , int element)
    {
        int size = inorder.size() ;
        for(int i = 0 ; i < size ; i++)
        {
            if(inorder[i] == element)
            {
                return i ;
            }
        }
        return -1 ;
    }
    
    TreeNode* solve(vector<int> preorder, vector<int> inorder , int &index , int inorderStart , int inorderEnd , int size)
    {
        if(index >= size || inorderStart > inorderEnd)
        {
            return NULL ;
        }
        
        int element = preorder[index++] ;
        TreeNode* root = new TreeNode(element) ;
        int position = findPos(inorder , element) ;
        
        root -> left = solve(preorder , inorder , index , inorderStart , position -1 , size) ;
        root -> right = solve(preorder , inorder , index , position +1 , inorderEnd , size) ;
        
        return root ;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex = 0 ;
        int n = preorder.size() ;
        int inorderStart = 0 ;
        int inorderEnd = n - 1 ;
        TreeNode* ans = solve(preorder , inorder , preOrderIndex , inorderStart ,inorderEnd , n) ;
        return ans ;
    }
};