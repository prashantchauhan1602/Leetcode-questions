/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool detectcycle(ListNode* head)
    {
        if(head == NULL || head -> next == NULL)
        {
            return false ;
        }
        
        ListNode* pro = head ;
        ListNode* noob = head ;
        bool flag ;
        while(pro != NULL && noob != NULL)
        {
            // cout << "Hello jii" << endl ;
            pro = pro -> next ;
            if(pro != NULL)
            {
                pro = pro -> next ;
            }
            noob = noob -> next ;
            
            if(pro == noob)
            {
                flag = true ;
                return flag ;
            }
            if(pro == NULL)
            {
                flag = false ;
                return flag;
            }
        }
        return flag ;
    }
    bool hasCycle(ListNode *head) {
        return detectcycle(head);
    }
};