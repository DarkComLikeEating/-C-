#include <iostream>
#include "xr.hpp"

using namespace std;

class Rational {
private:
	int num = 0;
	int den = 1;
public:
	Rational() noexcept {}
	Rational(int a, int b) 
		: num(a), den(b) {}
	
	void Print() {
		cout << num << "/" << den << endl;
	}
};

int main() {
	xrv(Rational().Print());
	Rational r; xrv(r.Print());
	Rational s = Rational(1, 2); xrv(s.Print());
	
	return 0;
}