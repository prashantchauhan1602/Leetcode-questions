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
    ListNode* solveRE(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* curr = head -> next;
        ListNode* prev = head;
        
        ListNode* chotaHead = solveRE(head -> next -> next);
        curr -> next = prev;
        prev -> next = chotaHead;
        
        return curr;
    }
    ListNode* swapPairs(ListNode* head) {
        return solveRE(head);
    }
};