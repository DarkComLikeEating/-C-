#include <iostream>
#include <cassert>

using namespace std;

class Complex {
private:
	double real, imag;
public:
	explicit Complex(double r = 0, double i = 0) noexcept
		:real(r), imag(i) {}
	Complex operator + (const Complex& rhs) const;
	Complex operator - (const Complex& rhs) const;
	Complex operator * (const Complex& rhs) const;
	Complex operator / (const Complex& rhs) const;
	
	friend ostream& operator << (ostream& os, const Complex& rhs);
};

Complex Complex::operator + (const Complex& rhs) const {
	return Complex(real + rhs.real, imag + rhs.imag);
}
Complex Complex::operator - (const Complex& rhs) const {
	return Complex(real - rhs.real, imag - rhs.imag);
}
Complex Complex::operator * (const Complex& rhs) const {
	Complex c;
	c.real = this->real * rhs.real - this->imag * rhs.imag;
	c.imag = this->real * rhs.imag + this->imag * rhs.real;
	return c;
}
Complex Complex::operator / (const Complex& rhs) const {
	double m = rhs.real * rhs.real + rhs.imag * rhs.imag;
	assert(m != 0);
	
	Complex c;
	c.real = this->real * rhs.real + this->imag * rhs.imag;
	c.imag = this->imag * rhs.real - this->real * rhs.imag;
	c.real /= m;
	c.imag /= m;
	
	return c;
}
	
ostream& operator << (ostream& os, const Complex& rhs) {
	os << rhs.real 
		<< (rhs.imag >= 0? "+" : "")
		<< rhs.imag << "i";
	return os;
}

int main() {
	Complex a{-5, 10}, b{3, 4};
	
	cout << (a + b) << endl;
	cout << (a - b) << endl;
	cout << (a * b) << endl;
	cout << (a / b) << endl;	
	
	return 0;
}