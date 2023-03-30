#include "xr.hpp"

using namespace std;

class Complex {
private:
	double real, imag;
public:
	explicit Complex(double r = 0, double i = 0)
		:real(r), imag(i) {}
	
	Complex operator + (double d) const;
	friend Complex operator + (double d, const Complex& rhs);
	
	friend ostream& operator << (ostream& os, const Complex& rhs);
};

Complex Complex::operator + (double d) const {
	return Complex(this->real + d, this->imag);
}
Complex operator + (double d, const Complex& rhs) {
	return rhs + d;
}
ostream& operator << (ostream& os, const Complex& rhs) {
	os << rhs.real 
		<< (rhs.imag >= 0 ? "+" : "")
		<< rhs.imag << "i";
	return os;
}

int main() {
	Complex c{1, 2};
	double d = 2;
	
	xr(c + d); xr(d + c);
	
	return 0;
}