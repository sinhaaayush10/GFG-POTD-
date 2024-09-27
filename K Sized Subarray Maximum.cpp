class Solution {
    public:
    std::vector<int> max_of_subarrays(int k, const std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> res;
        std::deque<int> dq;
        int i = 0;
        for (i = 0; i < k; i++) {
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        for (; i < n; i++) {
            res.push_back(arr[dq.front()]);
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        res.push_back(arr[dq.front()]);
        dq.pop_front();
        return res;
    }
};
