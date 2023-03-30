#include <iostream>

using namespace std;

int main() {
	char ch;
	cout << "Please enter one char:\t";
	cin.get(ch);
	cout.put(ch).put('\n');
	
	int n;
	cout << "\nPlease enter one char:\t";
	cin >> ws;
	n = cin.get();
	cout << n << endl;
	
	char buffer[80];
	cout << "\nPlease enter one syring (>> ):\t";
	cin >> buffer;
	cout << buffer << endl;
	
	cin.ignore(80, '\n');
	cout << "\nPlease enter one string (get):\t";
	cin.get(buffer, 80);
	cout << buffer << endl;
}