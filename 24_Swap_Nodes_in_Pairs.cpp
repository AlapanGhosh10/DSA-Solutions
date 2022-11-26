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
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return head;
        if (head -> next) {
            ListNode* temp = head;
            ListNode* nxt = head -> next -> next;
            head = head -> next;
            head -> next = temp;
            head -> next -> next = nxt;
            if(head -> next -> next)
                head -> next -> next = swapPairs(head -> next -> next);
        }
        return head;
    }
};
