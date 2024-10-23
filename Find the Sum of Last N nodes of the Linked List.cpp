class Solution {
  public:
    // Function to calculate the sum of the last n nodes in a linked list
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // If n is less than or equal to 0, return 0
        if (n <= 0)
            return 0;

        int sum = 0, temp = 0;
        struct Node *ref_ptr, *main_ptr;
        ref_ptr = main_ptr = head;

        // Calculate the sum of the first n nodes
        while (ref_ptr != NULL && n--) {
            sum += ref_ptr->data;
            ref_ptr = ref_ptr->next;
        }

        // Calculate the sum of the remaining nodes
        while (ref_ptr != NULL) {
            temp += main_ptr->data;
            sum += ref_ptr->data;
            main_ptr = main_ptr->next;
            ref_ptr = ref_ptr->next;
        }

        // Return the sum of the last n nodes
        return (sum - temp);
    }
};
