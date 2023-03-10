#include <iostream>

using namespace std;

class Complex {
private:
	double real, imag;
public:
	explicit Complex(double r = 0, double i = 0)
		:real(r), imag(i) {}
	
	friend ostream& operator << (ostream& os, const Complex& rhs);
	friend istream& operator >> (istream& is, Complex& rhs);
};

ostream& operator << (ostream& os, const Complex& rhs) {
	os << rhs.real 
		<< (rhs.imag >= 0 ? "+" : "")
		<< rhs.imag << "i";
	return os;
}
istream& operator >> (istream& is, Complex& rhs) {
	char dump;
	is >> rhs.real >> rhs.imag >> dump;
	return is;
}

int main() {
	Complex c;
	
	cout << "Please enter a complex like 1-2i: ";
	cin >> c;
	cout << c << endl;
	
	return 0;
}