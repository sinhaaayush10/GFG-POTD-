 class Solution {
public:
	
bool isEularCircuitExist(int v, vector<int>adj[]){
      
    for(int src=0; src<v;src++){
        if((adj[src].size())%2==0){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
 
};
