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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head -> next == NULL){
            return head;
        }
        ListNode* curr = head;
        int count = 0;
        ListNode* leftNode= NULL;
        ListNode*rightNode = NULL;
        while(curr != NULL){
            count++;
            if(count == k){
                leftNode = curr ;
            }
            curr = curr -> next;
        }
        
        int right = count - k + 1;
        ListNode*temp = head;
        while(right != 0){
            rightNode = temp;
            temp = temp -> next;
            right--;
        }
        
        if(leftNode != NULL && rightNode != NULL){
             swap(leftNode ->val , rightNode->val);
        }
        
        
        return head;
    }
};