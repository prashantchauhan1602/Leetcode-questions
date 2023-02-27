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
    void inorder(TreeNode* root , vector<int>& res)
    {
        if(root == NULL)
        {
            return ;
        }
        inorder(root -> left , res) ;
        res.push_back(root -> val) ;
        inorder(root -> right , res) ;
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> res ;
        inorder(root , res) ;
        sort(res.begin() , res.end()) ;
        set<int> st ;
        int output = -1 ;
        for(auto x:res)
        {
            st.insert(x) ;
            if(st.size() == 2)
            {
                output = x ;
                return output;
            }
        }
        return output ;

    }
};