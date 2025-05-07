#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"


TEST(Ts, lengthChecker60) {
	SimChecker checker;
	
	int expected = 60;
	int actual = checker.lengthCheck("abc", "qwe");

	EXPECT_EQ(expected, actual);
}

TEST(Ts, lengthChecker0) {
	SimChecker checker;

	int expected = 0;
	int actual = checker.lengthCheck("a", "bb");

	EXPECT_EQ(expected, actual);
}

TEST(Ts, lengthCheckerPartialScore) {
	SimChecker checker;

	int expected = 20;
	int actual = checker.lengthCheck("aaabb", "abb");

	EXPECT_EQ(expected, actual);
}