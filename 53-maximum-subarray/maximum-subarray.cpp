class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int maxi=nums[0];
        for(int i: nums){
            curr+=i;
            maxi=max(maxi,curr);
            if(curr<0){
                curr=0;
            }
        }
        return maxi;
    }
};