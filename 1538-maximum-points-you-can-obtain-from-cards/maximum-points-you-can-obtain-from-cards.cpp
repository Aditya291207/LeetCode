class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum = 0, rsum = 0, maxSum = 0;

        for (int i = 0; i < k; i++) {
            lsum += nums[i];
        }

        maxSum = lsum;

        int rindex = nums.size() - 1;

        for (int i = k - 1; i >= 0; i--) {
            lsum -= nums[i];
            rsum += nums[rindex];
            rindex--;

            maxSum = max(maxSum, lsum + rsum);
        }

        return maxSum;
    }
};