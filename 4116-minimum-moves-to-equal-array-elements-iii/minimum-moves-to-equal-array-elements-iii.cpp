class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[n-1]){
                nums[i]=nums[i]+1;
                count++;
            }
        }
        return count;
    }
};