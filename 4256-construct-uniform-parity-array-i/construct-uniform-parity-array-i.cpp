class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1[0]%2==0 && nums1[1]%2==0){
            return true;
        }
        return -1;
    }
};