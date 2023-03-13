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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res ;
        queue<TreeNode*> qs ;
        qs.push(root);
        while(!qs.empty())
        {
            int size = qs.size();
            double sum = 0 ;
            double avg ;
            int len = size ;
            while(size)
            {
                // int len = size ;
                TreeNode* front = qs.front();
                qs.pop();
                sum += front -> val ;
                
                if(front -> left)
                {
                    qs.push(front -> left);
                }
                if(front -> right)
                {
                    qs.push(front -> right);
                }
                size-- ;
            }
            cout << len << " " << sum << " ";
            // if(len != 0)
            // {
                avg = sum / len ;
            // }
            res.push_back(avg);
        }
        return res ;
    }
};