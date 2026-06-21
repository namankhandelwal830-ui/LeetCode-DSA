class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestEnding = nums[0];
        int ans = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int v1 = bestEnding + nums[i];
            int v2 = nums[i];
// isme kuch nhi karemge bas 2 case hai yah tooh pehel wale ke sath mil jao 
// yah fir apne apko rakho 
            bestEnding = max(v1, v2);
            ans = max(ans, bestEnding);
        }
        return ans;
    }
};
