#include <iostream>

using namespace std;

int main() {
	long fi{cin.flags()};
	long fo{cout.flags()};
	
	cout.setf(ios::hex, ios::basefield);
	cout << fi << "\t" << fo << endl;
	int n(0x6e);
	cout.setf(ios::uppercase | ios::showbase);
	cout << n << endl;
	
	cout.setf(ios::dec, ios::basefield);
	cout.setf(ios::showpos | ios::boolalpha);
	cout << 10 << "\t" << (2 < 3) << endl;
	
	cout.unsetf(ios::showpos | ios::boolalpha);
	cout << 10 << "\t" << (2 < 3) << endl;
}