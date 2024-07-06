class Solution
{
public:
    void f(Node *root,vector<Node*>&ans)
    {
        if(root!=NULL)
        {
            f(root->left,ans);
            ans.push_back(root);
            f(root->right,ans);
        }
    }
    void populateNext(Node *root)
    {
        vector<Node*>ans;
        f(root,ans);
        
        for(int i=0;i<ans.size()-1;i++)
        {
            ans[i]->next=ans[i+1];
        }
    }
};
