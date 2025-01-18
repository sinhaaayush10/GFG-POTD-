class Solution {
  public:
    Node *reverseList(Node *head) {
        if (head == NULL)
            return NULL;
        Node *prev = NULL;
        Node *current = head;
        Node *next = current->next;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};
