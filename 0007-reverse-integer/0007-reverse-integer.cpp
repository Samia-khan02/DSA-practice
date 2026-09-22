class Solution {
public:
    int reverse(int x) {

        long long temp;
        int rev = 0;
        bool negative = false;
        if (x < 0) {
            temp = abs((long long)x);
            negative = true;
        }
        else {
            temp = x;
        }
        while (temp > 0) {
            int dig = temp % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && dig > 7)) {
                return 0;
            }
            rev = (rev * 10) + dig;
            temp = temp / 10;
        }
        if (negative)
            return -rev;
        return rev;
    }
};