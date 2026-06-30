class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int prefixsum = 0;
        int remainder = 0;
        int ans = 0;
        int n = nums.size();
        mp[0] = 1; 
      // "Ye empty prefix ko dikhata hai, matlab array ke start se pehle." 
        for (int i = 0; i < n; i++) {
            prefixsum += nums[i];
            // remainder = (prefixsum % k); normal condition if all the number
            // are positve
            //  for -ve number and +ve we need a condition
            remainder = (prefixsum % k + k) % k;
            ans += mp[remainder];
            mp[remainder] ++ ; 
        }
            return ans ; 

        
    }
};
