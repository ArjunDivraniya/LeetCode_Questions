class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Remove all nodes from the beginning that match val
        while (head != nullptr && head->val == val) {
            head = head->next;
        }

        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                temp->next = temp->next->next; // skip node
            } else {
                temp = temp->next; // move forward
            }
        }
        return head;
    }
};
