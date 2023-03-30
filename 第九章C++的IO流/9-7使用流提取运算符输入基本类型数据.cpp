#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	double d;
	cout << "Please enter one integer and one double: ";
	cin >> n >> d;
	cout << n << "\t" << d << endl;
	
	char str[3];
	cout << "Please enter some chars: ";
	cin >> setw(3) >> str;
	cout << str << endl;
}