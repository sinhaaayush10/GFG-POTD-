class Solution {
    public:
    bool isLengthEven(struct Node **head) {
        struct Node *curr = *head, *t;
        while (curr && curr->next) {
            curr = curr->next->next; 
        }
        if (!curr)
            return true;
        return false;
    }
};
