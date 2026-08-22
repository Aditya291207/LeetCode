class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int product = 1;

        while(temp > 0) {
            int a = temp % 10;

            sum += a;
            product *= a;

            temp = temp / 10;
        }

        if(n % (sum + product) == 0) {
            return true;
        }
        return false;
    }
};