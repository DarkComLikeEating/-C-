#include <iostream>

using namespace std;

int main() {
	cout << (22 / 7.0) << "\t"
		<< (220 / 7.0) << endl;
	cout.precision(8);
	cout << (22 / 7.0) << "\t"
		<< (220 / 7.0) << endl;
		
	cout.setf(ios::fixed, ios::floatfield);
	cout << (22 / 7.0) << "\t"
		<< (220 / 7.0) << endl;
	cout.precision(6);
}