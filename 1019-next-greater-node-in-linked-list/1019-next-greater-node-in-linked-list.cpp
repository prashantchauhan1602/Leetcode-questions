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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode*curr = head;
        while(curr != NULL){
            ListNode* temp = curr;
            int value = temp -> val;
            int digit = 0;
            
            while(temp != NULL){
                if(temp -> val > value){
                    digit = temp -> val;
                    break;
                }
                temp = temp -> next;
            }
            ans.push_back(digit);
            curr = curr -> next;
        }
        return ans;
    }
};