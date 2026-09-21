class Solution {
public:
    int divide(int dividend, int divisor) {

      
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long divid = abs((long long)dividend);
        long long divis = abs((long long)divisor);

        long long ans = 0;

        while (divid >= divis) {

            long long temp = divis;
            long long multiple = 1;

            while (divid >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            divid -= temp;
            ans += multiple;
        }

        if ((dividend < 0) != (divisor < 0))
            ans = -ans;

        return (int)ans;
    }
};