class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        if (n > 999) {
            ans += min(n, 999999LL) - 999;
        }

        if (n > 999999) {
            ans += (min(n, 999999999LL) - 999999) * 2;
        }

        if (n > 999999999) {
            ans += (min(n, 999999999999LL) - 999999999LL) * 3;
        }

        if (n > 999999999999LL) {
            ans += (min(n, 999999999999999LL) - 999999999999LL) * 4;
        }

        if (n > 999999999999999LL) {
            ans += (min(n, 999999999999999999LL) - 999999999999999LL) * 5;
        }

        if (n > 999999999999999999LL) {
            ans += (n - 999999999999999999LL) * 6;
        }

        return ans;
    }
};