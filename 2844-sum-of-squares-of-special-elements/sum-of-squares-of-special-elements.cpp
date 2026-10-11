class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0,v;
        if(n==0){
            return n;
        }
        for(int i=0;i<n;i++){
            
            if(n % (i+1) ==  0 ){
               v =nums[i]*nums[i];
                sum += v;
            }
        }
        return sum;
    }
};