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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low = new ListNode(-1) ;
        ListNode* start1 = low ;
        ListNode* high = new ListNode(-1) ;
        ListNode* start2 = high ;
        
        ListNode* temp = head ;
        while(temp != NULL)
        {
            if(temp -> val >= x)
            {
                start2 -> next = temp ;
                start2 = temp;
                temp = temp -> next ;
                start2 -> next = NULL ;
            }
            else{
                start1 -> next = temp ;
                start1 = temp ;
                temp = temp -> next ;
                start1 -> next = NULL ;
            }
            
            
        }
        start2 -> next = NULL ;
        start1 -> next = high -> next ;
        // return start1 -> next ;
        return low -> next ;
    }
};