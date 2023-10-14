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
    
    ListNode* merge(ListNode*left, ListNode*right){
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        while(left != NULL && right != NULL){
            if(left->val < right->val){
                curr -> next = left;
                left = left -> next;
            }
            else{
                curr -> next = right;
                right = right -> next;
            }
            curr = curr -> next;
        }
        while(left != NULL){
            curr -> next = left;
            left = left -> next;
            curr = curr -> next;
        }
        while(right != NULL){
            curr -> next = right;
            right = right -> next;
            curr = curr -> next;
        }
        return dummy->next;
    }
    ListNode*mergeSort(vector<ListNode*>&lists, int start, int end){
        if(start == end){
            return lists[start];
        }
        if(start+1 == end){
            return merge(lists[start], lists[end]);
        }
        
        int mid = start + (end - start)/2;
        ListNode* left = mergeSort(lists, start, mid);
        ListNode* right = mergeSort(lists, mid+1, end);
        
        return merge(left,right);
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
        
        return mergeSort(lists, 0, lists.size() -1);
    }
};