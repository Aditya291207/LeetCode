class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int>s;
      for(int i:nums){
        s.insert(i);
        }
        nums.clear();
        for(int i:s){
            nums.push_back(i);
        }
        if(nums.size()>=3){
         return nums[nums.size() - 3];
        }
        return nums[nums.size() - 1];
    }
};