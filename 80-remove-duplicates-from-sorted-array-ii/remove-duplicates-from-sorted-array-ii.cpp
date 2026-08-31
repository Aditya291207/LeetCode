class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;

            if(freq[nums[i]] <= 2) {
                ans.push_back(nums[i]);
            }
        }

        for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        return ans.size();
    }
};