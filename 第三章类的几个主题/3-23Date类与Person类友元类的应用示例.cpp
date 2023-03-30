#include <iostream>
#include "xr.hpp"

using namespace std;

class Person;

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) 
		:year(y), month(m), day(d) {}
		
	friend Person;
};

class Person {
private:
	string name;
	Date birthday;
public:
	Person(const char* s, int y, int m, int d) 
		:name(s), birthday(y, m, d) {}
	void Print() {
		cout << name << ": "
			<< birthday.year << "-" << birthday.month << "-" << birthday.day << endl; 
	}
};

int main() {
	Person Tom{"Tom", 2000, 1, 1};
	xrv(Tom.Print());
	
	return 0;
}