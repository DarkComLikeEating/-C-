#include <iostream>
#include <functional>	// for function<>
#include <limits>		// for CHAR_MAX
#include <algorithm>	// for for_each()
#include <cctype>		// for isalnum, isalpha, etc.

using namespace std;

using CharFunc = function<int(int)>;

void printChar(CharFunc fp) {
	for (int c = 0; c < CHAR_MAX; c ++) {
		if (fp(c))
			cout << char(c);
	}
	cout << endl;
}

int allChar(int n) {
	return n >= 0 && n <= CHAR_MAX;
}

int main() {
	CharFunc fc[] = {allChar, isalnum, isalpha, iscntrl, 
				isdigit, isgraph, islower, isprint,
				ispunct, isspace, isupper, isxdigit	};
	auto n = sizeof(fc) / sizeof(*fc);
				
	for_each(fc, fc + n, printChar);
				
	return 0;			
}