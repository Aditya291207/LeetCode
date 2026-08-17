class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int ans=INT_MAX;
        int sum=0;
        for(int left=0;left<n;left++){
            sum+=nums[left];
             while(sum >= target) {
                ans = min(ans,left-i+1);
                sum -= nums[i];
                i++;
        }
        }
        if(ans == INT_MAX)
            return 0;
        else
            return ans;
    }
};