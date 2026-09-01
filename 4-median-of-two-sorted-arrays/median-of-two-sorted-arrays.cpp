class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        for(int i:nums1){
            merge.push_back(i);
        }
        for(int i:nums2){
            merge.push_back(i);
        }
        sort(merge.begin(),merge.end());
        int n=merge.size();
        if(n%2==0){
            return (merge[n/2]+merge[n/2-1])/2.0;
        }
        else{
            return merge[n/2];
        }
    }
};