#include <iostream>

using namespace std;

int main() {
	char buffer[80];
	cout <<"Please enter one string: ";
	cin.read(buffer, 11);
	cout << cin.gcount() << ":\t";
	cout.write(buffer, cin.gcount());
	
	cin.clear();
	cin.ignore(80, '\n');
	
	int n;
	cout << "\nPlease enter one integer: ";
	cin.read((char*)&n, sizeof(n));
	cout << cin.gcount() << ":\t";
	cout.write((const char*) &n, sizeof(n));
}