class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        int i=-1;
        for(auto& ch:s){
            if(ch=='(' || ch=='{' || ch=='[')
                s[++i]=ch;
            else{
                if(i>=0 && ((s[i]=='(' && ch==')') || (s[i]=='{' && ch=='}') || (s[i]=='[' && ch==']')))
                    i--;
                else
                    return false;
            }
        }
        return i==-1;
    }

};
