class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* first = head;
        x--;
        while(x--)
            head=head->next;
        Node* prev = head->prev;
        if(prev==nullptr) {
            first = head->next;
            delete(head);
            return first;
        }
        Node* next = head->next;
        if(next==nullptr) {
            prev->next = nullptr;
            return first;
        }
        prev->next = next;
        next->prev = prev;
        delete(head);
        return first;
    }
};
