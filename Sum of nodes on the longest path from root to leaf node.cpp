class Solution
{
private:
    void f(Node* root, int &MaxSum ,int sum, int lvl, int &prevLvl)
    {
        if(!root) return ;
        
        sum += root->data;
        if(lvl >= prevLvl)
        {
            if(lvl == prevLvl) MaxSum = max(MaxSum ,sum);
            else MaxSum = sum;
            prevLvl = lvl;
        }

        
        f(root->left , MaxSum ,sum , lvl+1, prevLvl);
        f(root->right , MaxSum ,sum , lvl+1, prevLvl);
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int MaxSum = 0;
        int prevLvl = 0;
        f(root, MaxSum, 0, 0, prevLvl);
        return MaxSum;
    }
};
