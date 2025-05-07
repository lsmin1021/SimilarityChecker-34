#include <string>
using std::string;

class SimChecker {
public:
	int lengthCheck(string str1, string str2) {
		if(str1.length() == str2.length())
			return 60;
		int str1Length = str1.length();
		int str2Length = str2.length();
		
		double gap;
		double divide;
		if (str1Length > str2Length) {
			gap = str1Length - str2Length;
			if (gap > str2Length * 2) return 0;
			divide = gap / str2.length();
		}
		else {
			gap = str2Length - str1Length;
			if (gap > str1Length * 2) return 0;
			divide = gap / str1.length();
		}
		
		double partialScore = (1 - divide) * 60;
		return partialScore;
	}


};