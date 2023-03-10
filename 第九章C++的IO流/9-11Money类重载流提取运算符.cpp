#include <iostream>
#include <string>

using namespace std;

class Money {
private:
	string name;
	double amount;
	string symbol;
public:
	Money(const char* pn = "", double d = 0, const char* ps = "")
		: name(pn), amount(d), symbol(ps) {}
	
	friend ostream& operator << (ostream& os, const Money& rhs);
	friend istream& operator >> (istream& is, Money& rhs);
};

ostream& operator << (ostream& os, const Money& rhs) {
	os << rhs.name << "\t" << rhs.amount << rhs.symbol;
	return os;
}

istream& operator >> (istream& is, Money& rhs) {
	getline(is, rhs.name);
	is >> rhs.amount >> ws;
	getline(is, rhs.symbol);
	return is;
}

int main() {
	Money m;
	
	cout << "Please enter infor for m:\t";
	cin >> m;
	cout << "Below is the infor of m:\t";
	cout << m << endl;
}