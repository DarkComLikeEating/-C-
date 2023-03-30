#include "xr.hpp"

using namespace std;

class Complex {
private:
	double real, imag;
public:
	explicit Complex(double r = 0, double i = 0) 
		:real(r), imag(i) {}
	friend Complex operator + (const Complex& lhs, const Complex& rhs);
	friend Complex operator * (const Complex& lhs, double d);
	friend Complex operator - (const Complex& c);
	friend bool operator ! (const Complex& c);
	friend ostream& operator << (ostream& os, const Complex& rhs);
	
};

Complex operator + (const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.real + rhs.real, lhs.imag + rhs.imag);
}
Complex operator * (const Complex& lhs, double d) {
	return Complex(lhs.real * d, lhs.imag * d);
}
Complex operator - (const Complex& c) {
	return Complex(-c.real, -c.imag);
}
bool operator ! (const Complex& c) {
	return c.real == 0 && c.imag == 0;
}
ostream& operator << (ostream& os, const Complex& rhs) {
	os << rhs.real
		<< (rhs.imag >= 0 ? "+" : "")
		<< rhs.imag << "i";
	return os;
}

int main() {
	Complex a{1, 2}, b{-6, 8};
	double d = 2;
	
	xr(a + b);
	xr(b * d);
	xr(!a);
	xr(-b);
}