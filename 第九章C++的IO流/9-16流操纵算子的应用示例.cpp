#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n = 0xac;
	cout << showbase 
		<< oct << n << "\t"
		<< hex << n << "\n"
		<< setiosflags(ios::basefield);
		
	cout << boolalpha << (2 < 3) << "\t"
		<< noboolalpha
		<< (2 != 3) << endl;
		
		cout << fixed << setprecision(8)
			<< (220 / 7.0) << "\t"
			<< nouppercase
			<< setprecision(6)
			<< (220 / 7.0) << "\n"
			<< setiosflags(ios::floatfield);
			
		cout << uppercase
			<< (220 / 7) << "\t"
			<< nouppercase
			<< setprecision(6)
			<< (220 / 7) << "\n"
			<< setiosflags(ios::floatfield);
			
		cout << 2.0 << "\t"
			<< showpoint << showpos
			<< (2.0) << "\t"
			<< internal << setw(10)
			<< setfill('#')
			<< (2.0) << "\n"
			<< noshowpoint << noshowpos
			<< setfill(' ')
			<< resetiosflags(ios::left);
}