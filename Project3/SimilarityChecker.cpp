#include <string>
using std::string;

class SimChecker {
public:
	int lengthCheck(string str1, string str2) {
		int length1 = str1.length();
		int length2 = str2.length();
		
		if (length1 == length2)
			return 60;

		if (length2 > length1) {
			int tmp;
			tmp = length2;
			length2 = length1;
			length1 = tmp;
		}

		double gap = length1 - length2;
		if (gap >= length2 * 2) return 0;
				
		double partialScore = (1 - (gap / length2)) * 60;
		return partialScore;
	}
};