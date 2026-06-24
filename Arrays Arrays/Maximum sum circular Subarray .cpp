class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;

        int maxEnding = nums[0], maxSum = nums[0];
        int minEnding = nums[0], minSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            totalSum += nums[i];

            maxEnding = max(nums[i], maxEnding + nums[i]);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(nums[i], minEnding + nums[i]);
            minSum = min(minSum, minEnding);
        }

        // Handle the edge case where all numbers are negative
        if (maxSum < 0 && totalSum == minSum)
            return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};
