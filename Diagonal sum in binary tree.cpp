
class Solution
{
    public:
    vector <int> diagonalSum(Node* root) {
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        int sum=0;
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                 Node* temp=q.front();
                 
                 while(temp)
                 {
                     sum+=temp->data;
                     if(temp->left)
                     q.push(temp->left);
                     if(temp->right)
                     {
                         temp=temp->right;
                     }
                     else
                     break;
                     
                 }
                q.pop();
            }
            ans.push_back(sum);
            sum=0;
        }
        return ans;
    }
};
