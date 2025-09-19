/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
         Node* temp = head;
     if (head == nullptr) return nullptr;
stack<Node*> st;

  while(temp){
    if(temp->child){
        if(temp->next)st.push(temp->next);
        temp->next=temp->child;
        temp->next->prev=temp;
        temp->child=nullptr;

    }
    if(!temp->next && !st.empty()){
        temp->next=st.top();
        temp->next->prev=temp;
        st.pop();
    }
    
    temp=temp->next;

  }
return head;
    }
};