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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head -> next)
            return head;
        ListNode* head2 = head -> next;
        ListNode* h1 = head;
        ListNode* h2 = head2;
        int i = 1;
        while(h1 -> next && h2 -> next) {
            if(i % 2 != 0) {
                h1 -> next = h2 -> next;
                h1 = h1 -> next;
            } else {
                h2 -> next = h1 -> next;
                h2 = h2 -> next;
            }
            i++;
        }
        h2 -> next = nullptr;
        h1 -> next = head2;
        return head;
    }
};
