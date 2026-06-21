class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int MaxEnding = nums[0];
        int MinEnding = nums[0];
        int ans = abs(nums[0]);

        for (int i = 1; i < n; i++) {
            MaxEnding = max(MaxEnding + nums[i], nums[i]);
            MinEnding = min(MinEnding + nums[i], nums[i]);

            ans = max(ans, max(abs(MaxEnding), abs(MinEnding)));
        }  // isme bas maxsum aur min sum dono ko jod diya hai aur unko abs value nikali hai mtlb abs [-100] = 100 hogyi ablsoulte value chayeh hume bas isme 
        return ans;
    }
};
