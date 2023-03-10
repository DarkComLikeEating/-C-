#include "xr.hpp"

using namespace std;

class Complex {
private:
	double real, imag;
public:
	double& Real() {return real;}
	double& Imag() {return imag;}
	
	const double& Real() const{return real;}
	const double& Imag() const{return imag;}
};

void Print (const Complex& c) {
	cout << "(" << c.Real() << ", " << c.Imag() << ")\n";
}

void Set(Complex& c, double r, double i) {
	c.Real() = r;
	c.Imag() = i;
}

int main() {
	Complex a;
	Set(a, 1, 2);
	xrv(Print(a));
	
	return 0;
}