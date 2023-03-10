#include "xr.hpp"

using namespace std;

class Complex {
private:
	double real, imag;
public:
	Complex(double r = 0, double i = 0) noexcept 
		:real(r), imag(i) {}
	void Print() const;
	
	friend Complex Add(const Complex& a, const Complex& b);
	friend Complex Sub(const Complex& a, const Complex& b);	
};
void Complex::Print() const {
	cout << "(" << real << ", " << imag << ")" << endl;
}
Complex Add(const Complex& a, const Complex& b) {
	Complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	return result;
}
Complex Sub(const Complex& a, const Complex& b) {
	Complex result;
	result.real = a.real - b.real;
	result.imag = a.imag - b.imag;
	return result;
}

int main() {
	Complex a{10, 3}, b{2, -8}, c;
	
	c = Add(a, b); xrv(c.Print());
	c = Sub(a, b); xrv(c.Print());
	
	return 0;
}