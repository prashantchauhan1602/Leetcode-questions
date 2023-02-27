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
    void inorder(TreeNode* root , vector<int> &ans)
    {
        if(root == NULL)
        {
            return ;
        }
        inorder(root -> left , ans) ;
        ans.push_back(root -> val) ;
        inorder(root -> right , ans) ;
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> res ;
        inorder(root , res) ;
        
        unordered_map<int , int> count ;
        int mx = INT_MIN ;
        for(int i = 0 ; i < res.size() ; i++)
        {
            count[res[i]]++ ;
            mx = max(count[res[i]] , mx) ;
        }
        vector<int> output ;
        for(auto x: count)
        {
            if(x.second == mx)
            {
                output.push_back(x.first) ;
            }
        }
        return output ;
    }
};