#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void input(int &n) {
	cin >> n;
}

void output(int n) {
	cout << n << "\t";
}

int main() {
	int a[] = {1, 2, 3, 4, 5};
	auto n(sizeof (a) / sizeof(*a));
	
	cout << "Output with for_each: ";
	for_each(a, a + n, output);
	cout << endl;
	
	cout << "Input with for_each: ";
	for_each(a, a + n, input);
	cout << endl;
	
	cout << "Output with copy: ";
	ostream_iterator<int> screen(cout, "\t");
	copy(a, a + n, screen);
	cout << endl;
	
	cout << "Input with copy: ";
	istream_iterator<int> keyboardIn(cin), endOfKeyboardIn;
	int *p = copy(keyboardIn, endOfKeyboardIn, a);
	
	cout << "Output with copy: ";
	copy(a, p, screen);
	cout << endl;
	
	return 0;
}