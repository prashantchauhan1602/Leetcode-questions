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
    void Similar(TreeNode* root , vector<int> &res)
    {
        if(root == NULL)
        {
            return ;
        }
        if(root -> left == NULL && root -> right == NULL)
        {
            res.push_back(root -> val) ;
            return ;
        }
        
        Similar(root -> left , res) ;
        Similar(root -> right , res) ;
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        bool flag = 1 ;
        vector<int> ans1 ;
        vector<int> ans2 ;
        Similar(root1 , ans1) ;
        Similar(root2 , ans2) ;
      
        if(ans1.size() != ans2.size())
        {
            return false ;
        }
        else{
            for(int i = 0 ; i < ans1.size() ; i++)
            {
                if(ans1[i] != ans2[i])
                {
                    flag = 0 ;
                    // cout << "hii" ;
                    return flag;
                }
            }
            return flag;
        }
        return flag;
        
    }
};