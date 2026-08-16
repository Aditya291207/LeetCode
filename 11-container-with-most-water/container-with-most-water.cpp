class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=0;
        while(l<r){
            int curr_area=min(height[l],height[r])*(r-l);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
            area=max(area,curr_area);
        }
        return area;
    }
};