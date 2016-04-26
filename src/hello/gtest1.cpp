#include "gtest/gtest.h"

int factorial(int n) {
	if (n < 1) return 1;
	return n * factorial(n-1);
}

TEST(FactorialTest, PositiveIntput) {
	EXPECT_EQ(1, factorial(1));
	EXPECT_EQ(2, factorial(2));
	EXPECT_EQ(6, factorial(3));
	EXPECT_EQ(40320, factorial(10));
}