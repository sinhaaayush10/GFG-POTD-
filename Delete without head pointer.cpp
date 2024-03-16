class Solution
{ 
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node*curr = del_node;
       curr->data = curr->next->data;
       Node*del=curr->next;
       curr->next =del->next;
       delete(del);
    }

};
