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
    void UniVal(TreeNode* root , vector<int> &ans)
    {
        if(root == NULL)
        {
            return ;
        }
        
        UniVal(root -> left , ans) ;
        ans.push_back(root -> val) ;
        UniVal(root -> right , ans) ;
    }
    bool isUnivalTree(TreeNode* root) {
        vector<int> res ;
        UniVal(root , res) ;
        int len = res.size() ;
        // cout << len ;
        sort(res.begin() , res.end()) ;
        int end = len - 1 ;
        if(res[0] == res[end])
        {
            return true ;
        }
        else{
            return false ;
        }
    }
};