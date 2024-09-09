class Solution {
  public:
    void sort012(vector<int>& arr) {
        vector<int>freq(3,0);
        for(int i=0;i<arr.size();i++)
        freq[arr[i]]++;
        int idx=0;
        for(int i=0;i<3;i++){
            int num=freq[i];
            for(int j=0;j<num;j++)
            arr[idx++]=i;
        }
        
    }
};
