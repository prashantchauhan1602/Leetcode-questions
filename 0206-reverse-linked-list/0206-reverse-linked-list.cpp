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
    
    void solveRE(ListNode* &head, ListNode*curr , ListNode*prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        
        solveRE(head,curr->next, curr);
        curr -> next = prev;
        
      
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode*curr = head;
        ListNode*prev = NULL;
        solveRE(head,curr,prev);
        return head;
    }
};