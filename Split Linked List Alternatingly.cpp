class Solution {
  public:
    // Function to append a new node with newData at the end of a linked list
    void append(struct Node** headRef, int newData) {
        struct Node* new_node = new Node(newData);
        struct Node* last = *headRef;

        if (*headRef == NULL) {
            *headRef = new_node;
            return;
        }
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }

    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        struct Node* a = NULL;
        struct Node* b = NULL;
        struct Node* current = head; // Initialize current as head

        // Iterate through the list
        while (current != NULL) {
            append(&a, current->data); // Append current node's data to list a
            current = current->next;   // Move current to the next node

            // If current is not NULL, append its data to list b and move current to the
            // next node
            if (current != NULL) {
                append(&b, current->data);
                current = current->next;
            }
        }
        return {a, b};
    }
};
