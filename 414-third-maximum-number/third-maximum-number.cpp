class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;

        for(int i : nums){
            s.insert(i);
        }

        nums.clear();

        for(auto i : s){
            nums.push_back(i);
        }

        int n = nums.size();

        if(n >= 3){
            return nums[n-3];
        }

        return nums[n-1];
    }
};