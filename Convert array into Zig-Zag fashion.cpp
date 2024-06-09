class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
        int temp=0, temp1=0;
        for(int i=0; i<n-1; i+=2) {
            if(arr[i]>arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
            if(i+2<n and arr[i+1]<arr[i+2]) {
                temp1 = arr[i+1];
                arr[i+1]=arr[i+2];
                arr[i+2]=temp1;
            }
        }
    }
};
