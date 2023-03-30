#include <iostream>

using namespace std;

class Rational {
	int num, den;
public:
	Rational(int n = 0) noexcept
		: num(n), den(1) {
		cout << "ctor:\t" << num << "/" << den << endl;
		}
	~Rational() noexcept {
		cout << "dtor:\t" << num << "/" << den << endl;
	}
};

int main() {
	Rational r;
	r = 2;
	return 0;
}