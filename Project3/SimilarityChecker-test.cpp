#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"

class SimCheckerTester : public testing::Test {
public:
	SimChecker checker;
	void lengthCheck(string str1, string str2, int expected) {
		int actual = checker.lengthCheck(str1, str2);
		EXPECT_EQ(expected, actual);
	}
};

TEST_F(SimCheckerTester, LegnthCheckSameLength) {
	lengthCheck("abc", "qwe", 60);
}

TEST_F(SimCheckerTester, LegnthCheckZeroScore) {
	lengthCheck("a", "bb" , 0);
}

TEST_F(SimCheckerTester, LegnthCheckPartialScore) {
	lengthCheck("aaabb", "abb", 20);
}

TEST_F(SimCheckerTester, LegnthCheckPartialScore2) {
	lengthCheck("aa", "aae", 30);
}

