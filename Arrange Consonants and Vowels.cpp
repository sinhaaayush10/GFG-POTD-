class Solution
{
     bool isVowel(char ch){
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') 
            return true;
        return false;
    }
    public:
    struct Node* arrangeCV(Node *head)
    {
        if(head == NULL)
            return head;
            
        vector<char> vows;
        vector<char> cons;
        while(head != NULL){
            if(isVowel(head->data))
                vows.push_back(head->data);
            else
                cons.push_back(head->data);
            head = head->next;
        }
        struct Node* ans = new Node(0);
        struct Node* curr = ans;
        
        for(int i=0; i<vows.size(); i++){
            curr->next = new Node(vows[i]);
            curr = curr->next;
        }
        for(int i=0; i<cons.size(); i++){
            curr->next = new Node(cons[i]);
            curr = curr->next;
        }
        
        return ans->next;
        
    }
};
