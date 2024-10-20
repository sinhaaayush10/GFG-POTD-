class Compare {
  public:
    bool operator()(DLLNode *a, DLLNode *b) { return a->data > b->data; }
};
class Solution {
  public:
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        if (head == nullptr)
            return head;
        priority_queue<DLLNode *, vector<DLLNode *>, Compare> pq;
        DLLNode *newHead = nullptr, *last = nullptr;
        for (int i = 0; head != NULL && i < k + 1; i++) {
            pq.push(head);
            head = head->next;
        }
        while (!pq.empty()) {
            if (newHead == nullptr) {
                newHead = pq.top();
                newHead->prev = nullptr;
                last = newHead;
            }
            else {
                last->next = pq.top();
                pq.top()->prev = last;
                last = pq.top();
            }
            pq.pop();
            if (head != nullptr) {
                pq.push(head);
                head = head->next;
            }
        }
        last->next = nullptr;
        return newHead;
    }
};
