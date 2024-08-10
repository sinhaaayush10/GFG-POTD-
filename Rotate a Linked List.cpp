class Solution
{
    public:
    Node* rotate(Node* head, int K)
    {
        Node* last = head;
        Node* temp = head;
        if (head == NULL || K == 0) {
            return head;
        }
        while (last->next != NULL) {
            last = last->next;
        }
        while (K) {
            head = head->next;
            temp->next = NULL;
            last->next = temp;
            last = temp;
            temp = head;
            K--;
        }
        return head;
    }
};
