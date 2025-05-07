#include <string>
using std::string;

class SimChecker {
private:
	const int MAX_SCORE_LENGTH = 60;
	const int ZERO_SCORE = 0;
public:
	int lengthCheck(string& str1, string& str2) {
		int length1 = str1.length();
		int length2 = str2.length();

		if (isMaxScore(length1, length2)) return MAX_SCORE_LENGTH;

		if (length2 > length1) {
			auto tmp = length2;
			length2 = length1;
			length1 = tmp;
		}

		double gap = length1 - length2;
		if (isZeroScore(gap, length2)) return ZERO_SCORE;

		return (1 - (gap / length2)) * MAX_SCORE_LENGTH;
	}

	bool isZeroScore(double gap, int length2) {
		return gap >= length2 * 2;
	}

	bool isMaxScore(int length1, int length2) {
		return length1 == length2;
	}
};
