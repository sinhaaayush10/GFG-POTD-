
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
     // Code here
     stack<Node*>curr,temp;
     vector<int>ans;
     curr.push(root);
     bool lr=true;
     while(!curr.empty()){
         Node*top=curr.top();
         curr.pop();
         ans.push_back(top->data);
         if(lr){
             if(top->left)temp.push(top->left);
             if(top->right)temp.push(top->right);
         }
         else {
             if(top->right)temp.push(top->right);
             if(top->left)temp.push(top->left);
         }
         if(curr.empty()){
             lr=!lr;
             swap(curr,temp);
         }
     }
     return ans;
    }
};
