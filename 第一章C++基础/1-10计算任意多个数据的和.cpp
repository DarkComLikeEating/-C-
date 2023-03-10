#include <iostream>				// p22
#include <initializer_list>

using namespace std;

double sum(initializer_list<double> ld) {
	double s {0};
	for (auto i: ld)
		s += i;
	return s;
}

int main() {
	cout << sum({1, 2, 3}) << endl;
	cout << sum({1, 2, 3, 4, 5}) << endl;
	
	return 0;
}