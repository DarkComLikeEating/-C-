#include <iostream>
#include <string>
#include "xr.hpp"

using namespace std;

inline bool isLowerCase(char c) {return c >= 'a' && c <= 'z';}
inline bool isUpperCase(char c) {return c >= 'A' && c <= 'Z';}
inline bool isNumber(char c) {return c >= '0' && c <= '9';}

int main() {
	string s;
	cout << "Please enter a sentence: ";
	getline(cin, s);
	
	int nLowerCase{}, nUpperCase{}, nNumber{};
	for (size_t i{}; i < s.size(); i ++) {
		if (isLowerCase(s[i])) nLowerCase ++;
		else if (isUpperCase(s[i])) nUpperCase ++;
		else if (isNumber(s[i])) nNumber ++;
	}
	
	xr(nLowerCase); xr(nUpperCase); xr(nNumber);
	
	return 0;
}