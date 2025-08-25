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
    if(head==nullptr || !head->next) return head;
        ListNode* temp = head;
        ListNode* even = head->next;
        ListNode* last = even;

        while (even && even->next) {

            temp->next =even->next;
            temp = even->next;

            even->next = temp->next;
            even = temp->next;
        }
        temp->next = last;
        return head;
    }
};