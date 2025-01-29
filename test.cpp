#include <gtest/gtest.h>
#include "MyMathLib.h"
#include "BasicMath.h"
#include "AdvancedMath.h"

// Pruebas para MyMathLib
TEST(MyMathLibTest, TestSqrtPositive) {
    EXPECT_EQ(mySqrt(9), 3);
    EXPECT_EQ(mySqrt(0), 0);
}

TEST(MyMathLibTest, TestSqrtNegative) {
    EXPECT_THROW(mySqrt(-1), std::runtime_error);
}

// Pruebas para BasicMath
TEST(BasicMathTest, TestAdd) {
    EXPECT_EQ(BasicMath::add(5, 3), 8);
    EXPECT_EQ(BasicMath::add(-5, -3), -8);
}

TEST(BasicMathTest, TestSubtract) {
    EXPECT_EQ(BasicMath::subtract(5, 3), 2);
    EXPECT_EQ(BasicMath::subtract(-5, -3), -2);
}

TEST(BasicMathTest, TestMultiply) {
    EXPECT_EQ(BasicMath::multiply(5, 3), 15);
    EXPECT_EQ(BasicMath::multiply(0, 3), 0);
}

TEST(BasicMathTest, TestDivide) {
    EXPECT_EQ(BasicMath::divide(6, 3), 2);
    EXPECT_THROW(BasicMath::divide(6, 0), std::runtime_error);
}

// Pruebas para AdvancedMath
TEST(AdvancedMathTest, TestFactorial) {
    EXPECT_EQ(AdvancedMath::factorial(5), 120);
    EXPECT_EQ(AdvancedMath::factorial(0), 1);
    EXPECT_THROW(AdvancedMath::factorial(-1), std::runtime_error);
}

TEST(AdvancedMathTest, TestCombination) {
    EXPECT_EQ(AdvancedMath::combination(5, 3), 10);
    EXPECT_EQ(AdvancedMath::combination(6, 0), 1);
    EXPECT_THROW(AdvancedMath::combination(5, -1), std::runtime_error);
    EXPECT_THROW(AdvancedMath::combination(5, 6), std::runtime_error);
}