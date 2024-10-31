class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        struct Node* current;
        if (head == NULL)
            return getNode(x);
        else if (head->data >= x) {
            Node* newNode = getNode(x);
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else {
            current = head;
            while (current->next != NULL && current->next->data < x)
                current = current->next;
            Node* newNode = getNode(x);
            newNode->next = current->next;
            if (current->next != NULL)
                newNode->next->prev = newNode;
            current->next = newNode;
            newNode->prev = current;
        }
        return head;
    }
};
