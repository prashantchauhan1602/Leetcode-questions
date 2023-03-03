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
    ListNode* list(vector<int>& ans)
    {
        int len = ans.size();
        ListNode* root = new ListNode(ans[0]);
        ListNode* curr = root ;
        for(int i = 1 ; i < len ; i++)
        {
            // cout << "hii" ;
            ListNode* temp = new ListNode(ans[i]);
            curr -> next = temp ;
            curr = temp;
        }
        curr -> next = NULL ;
        return root;
    }
    vector<int> sortedList(ListNode* head , vector<int>& ans)
    {
        ListNode* curr = head ;
        while(curr != NULL)
        {
            ans.push_back(curr -> val) ;
            curr = curr -> next ;
        }
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
    
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans ;
        ans = sortedList(head , ans) ;
        // for(int i = 0 ; i < ans.size() ; i++)
        // {
        //     cout << ans[i] << " " ;
        // }
        return list(ans) ;
    }
};