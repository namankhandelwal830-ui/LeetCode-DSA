lass Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        int leftsum = 0;
        int rightsum = 0;
        int n = nums.size();

        // first loop
        for (int i = 0; i < n; i++) {
            totalsum += nums[i];
        } // second loop
        for (int i = 0; i < n; i++) {
            // abb right sum calculate kro fir check kro kya right == left ke
            // hai agr hai toh jis index pe ewqual hai unhe return kr do warna
            // left ko update kro
            rightsum = (totalsum - leftsum - nums[i]);
            if (rightsum == leftsum)

                return i;

            leftsum += nums[i];
        }
        return -1;
    }
};
