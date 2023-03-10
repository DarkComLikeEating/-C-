#include <iostream>
#include <string>

using namespace std;

class Money {
private:
	string name;
	double amount;
	string symbol;
public:
	Money(const char* pn, double d, const char* ps) 
		: name(pn), amount(d), symbol(ps) {}
		
	friend ostream& operator << (ostream& os, const Money& rhs);
};

ostream& operator << (ostream& os, const Money& rhs) {
	os << rhs.name << "\t" << rhs.amount << rhs.symbol;
	return os;
}

int main() {
	Money ma("Chinese Yuan", 100, "￥");
	cout << ma << endl;
	Money mb("U.S. Dollar", 200, "$");
	cout << mb << endl;
}