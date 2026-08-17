class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0){
            return 0;
        }
        long long int max_n=pow(10,n)-1;
        for(long long int n=max_n;n>0;n--){
            long long temp=n;
            int sum=0;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            if(sum==s){
                return n;
            }
        }
        return -1;
    }
};