class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int keep = arr[0];
        int del = 0; // one deletion used
        int ans = arr[0];

        for (int i = 1; i < n; i++) {
            int prev_keep = keep;

            keep = max(arr[i], keep + arr[i]);

            del = max(del + arr[i], prev_keep);

            ans = max({ans, keep, del});
        }

        return ans;
    }
};
