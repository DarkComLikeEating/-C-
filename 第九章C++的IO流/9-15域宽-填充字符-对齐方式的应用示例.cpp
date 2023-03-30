#include <iostream>

using namespace std;

int main() {
	int n = 100;
	
	cout.fill('*');
	cout.setf(ios::showpos);
	cout.width(7);
	cout << n << endl;
	
	cout.setf(ios::left, ios::adjustfield);
	cout.width(7);
	cout << n << endl;
	
	cout.setf(ios::internal, ios::adjustfield);
	cout.width(7);
	cout << n << endl;
}