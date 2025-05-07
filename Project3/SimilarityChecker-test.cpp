#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"


TEST(Ts, lengthChecker60) {
	SimChecker checker;
	
	int expected = 60;
	int actual = checker.check("abc", "qwe");

	EXPECT_EQ(expected, actual);
}

TEST(Ts, lengthChecker0) {
	SimChecker checker;

	int expected = 0;
	int actual = checker.check("a", "bb");

	EXPECT_EQ(expected, actual);
}