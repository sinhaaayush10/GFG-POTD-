class Solution {
  public:
    int count(struct Node* head, int key) {
       if (head == NULL)
            return 0;
          int ans = count(head->next, key);
        if (head->data == key)
            ans++;
        return ans;
    }
};
