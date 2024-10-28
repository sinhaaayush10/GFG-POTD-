class Solution {
  public:
    vector<int> removeDuplicate(vector<int> &arr) {
        int res_ind = 1;
        for (int i = 1; i < arr.size(); i++) {
            int j;
            for (j = 0; j < i; j++)
                if (arr[i] == arr[j])
                    break;
            if (j == i)
                arr[res_ind++] = arr[i];
        }
        arr.erase(arr.begin() + res_ind, arr.end());
        return arr; 
    }
};
