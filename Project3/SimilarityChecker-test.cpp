#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"


TEST(LegnthCheck, SameLength) {
	SimChecker checker;
	
	int expected = 60;
	int actual = checker.lengthCheck("abc", "qwe");

	EXPECT_EQ(expected, actual);
}

TEST(LegnthCheck, ZeroScore) {
	SimChecker checker;

	int expected = 0;
	int actual = checker.lengthCheck("a", "bb");

	EXPECT_EQ(expected, actual);
}

TEST(LegnthCheck, PartialScore) {
	SimChecker checker;

	int expected = 20;
	int actual = checker.lengthCheck("aaabb", "abb");

	EXPECT_EQ(expected, actual);
}

TEST(LegnthCheck, PartialScore2) {
	SimChecker checker;

	int expected = 30;
	int actual = checker.lengthCheck("aa", "aae");

	EXPECT_EQ(expected, actual);
}

