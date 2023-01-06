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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(-1) ;
        ListNode* tail = ans ;
        ListNode* temp1 = list1 ;
        ListNode* temp2 = list2 ;
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1 -> val <= temp2 -> val)
            {
                ListNode* newnode = new ListNode(temp1 -> val) ;
                tail -> next = newnode ;
                temp1 = temp1 -> next ;
                tail = newnode ;
                cout << "Hii" ;
            }
            else{
                ListNode* newnode = new ListNode(temp2 -> val) ;
                tail -> next = newnode ;
                temp2 = temp2 -> next ;
                tail = newnode ;
                cout << "Hello" ;
            }
        }
        while(temp1 != NULL)
        {
            ListNode* newnode = new ListNode(temp1 -> val) ;
            tail -> next = temp1 ;
            temp1 = temp1 -> next ;
            tail = newnode ;
            cout << "Hii" ;
        }
        while(temp2 != NULL)
        {
            ListNode* newnode = new ListNode(temp2 -> val) ;
            tail -> next = newnode;
            temp2 = temp2 -> next ;
            tail = newnode ;
            cout << "Hello" ;
        }
        return ans -> next ;
    }
};