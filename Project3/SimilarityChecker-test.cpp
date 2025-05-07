#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"


TEST(Ts, tc) {
	SimChecker checker;
	
	int expected = 60;
	int actual = checker.check("abc", "qwe");

	EXPECT_EQ(expected, actual);
}