
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int l1 = 0;
        int l2 = 0;

        while (temp1) {
            l1++;
            temp1 = temp1->next;
        }

        while (temp2) {
            l2++;
            temp2 = temp2->next;
        }

        temp1 = headA;
        temp2 = headB;

        int skip = abs(l1 - l2);

        if (l1 > l2) {
            while (skip--) {
                temp1 = temp1->next;
            }
        } else {
            while (skip--) {
                temp2 = temp2->next;
            }
        }

        while (temp1 && temp2) {
            if (temp1 == temp2) {
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return nullptr;
    }
};
