#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "enter an integer: ";
	cin >> n;
	cout << n << " just entered." << endl;
	
	cerr << "information from cerr." << endl;
	clog << "information from clog." << endl;
	
	return 0;
}