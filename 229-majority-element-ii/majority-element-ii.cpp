class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> answer;
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && nums[i] == nums[i + 1]) {
                count++;
                i++;
            }
            if (count > n / 3) {
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};