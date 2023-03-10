#include <iostream>

using namespace std;

int main() {
	if (auto x{ cin.get() }; x >= 48 && x <= 57) {
		cout << x << " is a digit" << endl;
	} else {
		cout << x << " is not a digit" << endl;
	}
	
	return 0;
}
