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
    private :
    ListNode* reverse(ListNode* templeft , ListNode* tempright)
    {
        ListNode* prev = NULL ;
        ListNode* templ = templeft ;
        ListNode* forward = NULL ;
        
        while(templ != tempright)
        {
            ListNode* templ_next = templ -> next ;
            templ -> next = prev ;
            prev = templ ;
            templ = templ_next ;
        }
        return prev ;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head -> next == NULL)
        {
            return head ;
        }
        ListNode* temp = head ;
        if(left == 1)
        {
            int count = 1 ;
            ListNode* curr = head ;
            while(count < right)
            {
                temp = temp -> next ;
                count++ ;
            }
            ListNode* end = temp -> next ;
            ListNode* join = reverse(curr , temp -> next) ;
            curr -> next = end ;
            return temp ;
        }
        
//         ListNode* temp = head ;
       else{
            ListNode* curr = head ;
        int step = 1 ;
        int count = 1 ;
        while(step < left - 1)
        {
            curr = curr -> next ;
            step++ ;
        }
        
        ListNode* prev = curr -> next ;
        ListNode* start = prev -> next ;
        
        
        while(count < right)
        {
            temp = temp -> next ;
            count++ ;
        }
        
        ListNode* end = temp ;
        ListNode* forward = temp -> next ;
        
        ListNode* join = reverse(prev , forward) ;
        
        curr -> next = join ;
        prev -> next = forward ;
        
        
        return head ;
       }
        return temp ;
    }
};