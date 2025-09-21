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
    ListNode* deleteMiddle(ListNode* head) {
       int count=0;
       ListNode* temp=head;
       if(!head || !head->next )return NULL;

       while(temp){
        temp=temp->next;
        count++;

       }
       temp=head;
       int mid =count/2;
       for(int i=1;i<mid;i++){
        temp=temp->next;

       }
       temp->next=temp->next->next;
       return head;
    }
};