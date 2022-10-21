/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head ;
        ListNode* odd = new ListNode(-1) ;
        ListNode* start1 = odd ;
        ListNode* even = new ListNode(-1) ;
        ListNode* start2 = even ;
        
        int step = 1 ;
        while(temp != NULL)
        {
            if(step % 2 == 0)
            {
                start2 -> next = temp ;
                start2 = temp ;
                temp = temp -> next ;
                start2 -> next = NULL ;
                
                step++ ;
            }
            else
            {
                start1 -> next = temp ;
                start1 = temp ;
                temp = temp -> next ;
                start1 -> next = NULL ;
                
                step++ ;
            }
        }
        
        start2 -> next = NULL ;
        start1 -> next = even -> next ;
        return odd -> next ;
        
    }
};