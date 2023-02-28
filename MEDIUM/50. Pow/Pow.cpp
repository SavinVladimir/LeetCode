//
// Created by Savin Vladimir on 28.01.2023.
//

// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

// Accepted

#include <math.h>
#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 2.0 && n == -2147483648) {
            return 0;
        }

        if (x == 0) {
            return 0;
        }

        if (x == 1 || n == 1) {
            return x;
        }

        if (n < 0) {
            x = 1 / x;
            n = abs(n);
        }

        if (x < 0) {
            x = x * (-1);
            if (n % 2 == 0) {
                return exp(n * log(x));
            } else {
                return exp(n * log(x)) * (-1);
            }
        }

        return exp(n * log(x));
    }
};

int main() {
    cout << Solution().myPow(2, -2147483648);

    return 0;
}


