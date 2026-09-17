class Solution {
public:
    int divide(int dividend, int divisor) {

        // Edge cases
        if (dividend == divisor)
            return 1;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        if (divisor == 1)
            return dividend;

        // Determine sign
        bool isPositive = true;

        if ((dividend < 0) ^ (divisor < 0))
            isPositive = false;

        // Convert to long long before taking absolute value
        long long n = dividend;
        long long d = divisor;

        n = abs(n);
        d = abs(d);

        long long ans = 0;

        while (n >= d) {

            int count = 0;

            // Find largest power of 2 that fits
            while (n >= (d << (count + 1))) {
                count++;
            }

            // Add 2^count to answer
            ans += (1LL << count);

            // Subtract divisor * 2^count
            n -= (d << count);
        }

        // Apply sign
        if (!isPositive)
            ans = -ans;

        // Handle overflow
        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return (int)ans;
    }
};