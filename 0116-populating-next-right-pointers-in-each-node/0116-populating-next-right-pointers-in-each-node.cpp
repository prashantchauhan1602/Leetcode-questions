/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
        {
            return NULL ;
        }
        
        queue<Node*> qs ;
        qs.push(root) ;
        while(!qs.empty())
        {
            int len = qs.size() ;
            vector<Node*> ans ;
            for(int i = 0 ; i < len ; i++)
            {
                Node* frontNode = qs.front() ;
                qs.pop() ;
                
                if(frontNode -> left)
                {
                    qs.push(frontNode -> left) ;
                }
                if(frontNode -> right)
                {
                    qs.push(frontNode -> right) ;
                }
                ans.push_back(frontNode) ;
            }
            int length = ans.size() ;
            // ans[length - 1] -> next = NULL ;
            for(int i = 1 ; i < length ; i++)
            {
               ans[i - 1] -> next = ans[i] ;
            }
        }
        return root ;
    }
};