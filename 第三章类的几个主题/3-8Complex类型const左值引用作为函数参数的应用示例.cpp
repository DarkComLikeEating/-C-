#include "xr.hpp"

using namespace std;

struct Complex {
	double real, imag;

	Complex(double r = 0, double i = 0) noexcept
		:real(r), imag(i)
	{}
};

void Print(const Complex& c) {
	cout << "(" << c.real << ", " << c.imag << ")\n";
}

void Add(const Complex& a, const Complex& b, Complex& c) {
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
}

int main() {
	Complex a = {1, 2}, b = {3, 4}, c;
	xrv(Print(a));
	xrv(Print(b));
	
	Add(a, b, c);
	xrv(Print(c));
	
	return 0;
}