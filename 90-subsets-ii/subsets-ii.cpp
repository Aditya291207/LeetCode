class Solution {
public:

void getallsubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allsubsets){
    if(i==nums.size()){   
        allsubsets.push_back(ans);
        return;   
}
    ans.push_back(nums[i]);
    getallsubsets(nums, ans, i + 1,allsubsets);

    ans.pop_back();
    int ind=i+1;//ind=index
    while(ind<nums.size() && nums[ind]==nums[ind-1]){
        ind++;
    }
    getallsubsets(nums, ans, ind,allsubsets);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allsubsets;
        vector<int>ans;
        getallsubsets(nums, ans, 0,allsubsets);
        return allsubsets;
    }
};