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
    ListNode* IsCycle(ListNode* head)
    {
        if(head == NULL || head -> next == NULL)
        {
            return NULL ;
        }
        ListNode* pro = head ;
        ListNode* noob = head ;
        ListNode* pos;
        while(pro != NULL && noob != NULL)
        {
            pro = pro -> next ;
            if(pro != NULL)
            {
                pro = pro -> next ;
            }
            noob = noob -> next ;
            
            if(pro == noob)
            {
                noob = head ;
                while(noob != pro)
                {
                    pro = pro -> next ;
                    noob = noob -> next ;
                }
                return noob;
            }
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        return IsCycle(head);
    }
};