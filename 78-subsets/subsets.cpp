class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<vector<int>> result;
        vector<int> ans;

        subset(nums, ans, i, result);

        return result;
    }

    void subset(vector<int> &nums,
                vector<int> &ans,
                int i,
                vector<vector<int>> &result)
    {
        if(i == nums.size())
        {
            result.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        subset(nums, ans, i + 1, result);

        ans.pop_back();
        subset(nums, ans, i + 1, result);
    }
};