class Solution {
  public:
    void deleteAlt(struct Node *head) {
         if (head == nullptr || head->next == nullptr) {
            return;
        }
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
        
        deleteAlt(head->next);
    }
};
