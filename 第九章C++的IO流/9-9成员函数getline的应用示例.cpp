#include <iostream>
#include <string>

using namespace std;

int main() {
	char buffer[80];
	cout << "Please enter one string: ";
	cin.getline(buffer, 80);
	cout << buffer << endl;
	
	cout << "Please enter one string: ";
	cin.get(buffer, 80);
	cout << buffer << endl;
	
	string s;
	cout << "Please enter one string: ";
	cin >> ws;
	getline(cin, s);
	cout << s << endl;
}