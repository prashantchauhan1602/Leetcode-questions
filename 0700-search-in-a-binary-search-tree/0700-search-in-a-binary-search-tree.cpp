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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* curr = root ;
        while(curr != NULL)
        {
            if(curr -> val == val)
            {
                cout << 1 ;
                return curr;
            }
        
            if(curr -> val > val )
            {
                // searchBST(root -> left , val) ;
                curr = curr -> left ;
            }
            else{
                // searchBST(root -> right , val) ;
                curr = curr -> right ;
            }
            
            // TreeNode* temp = curr ;
            // if(temp != NULL)
            // {
            //     cout << "Hello ji" ;
            // }
        }
        return curr ;
    }
};