#ifndef ADVANCEDMATH_H
#define ADVANCEDMATH_H

class AdvancedMath {
public:
    static unsigned long long factorial(int n) {
        if (n < 0) {
            throw std::runtime_error("Negative number not allowed");
        }
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    static unsigned long long combination(int n, int r) {
        if (n < 0 || r < 0 || r > n) {
            throw std::runtime_error("Invalid values for combination");
        }
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
};

#endif // ADVANCEDMATH_H