#ifndef MYMATHLIB_H
#define MYMATHLIB_H

#include <cmath>
#include <stdexcept>

double mySqrt(double x) {
    if (x < 0) {
        throw std::runtime_error("Cannot compute square root of a negative number");
    }
    return std::sqrt(x);
}

#endif // MYMATHLIB_H