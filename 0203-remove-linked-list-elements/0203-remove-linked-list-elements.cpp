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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head ;
        ListNode* ans = new ListNode(-1) ;
        ListNode* start = ans ;
        while(temp != NULL)
        {
            if(temp -> val == val)
            {
                temp = temp -> next ;
            }
            else{
                start -> next = temp ;
                start = temp ;
                temp = temp -> next ;
                start -> next = NULL ;
            }
        }
        return ans -> next ;
    }
};