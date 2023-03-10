#include "xr.hpp"

using namespace std;

class Rational {
private:
	int num, den;
public:
	explicit Rational(int n = 0, int d = 1) noexcept 
		:num(n), den(d) {}
	
	bool operator < (const Rational& rhs) const;
	bool operator <= (const Rational& rhs) const;
	bool operator > (const Rational& rhs) const;
	bool operator >= (const Rational& rhs) const;
	bool operator == (const Rational& rhs) const;
	bool operator != (const Rational& rhs) const;
};

bool Rational::operator < (const Rational& rhs) const {
	return this->num * rhs.den < this->den * rhs.num;
}
bool Rational::operator <= (const Rational& rhs) const {
	return !(rhs < *this);
}
bool Rational::operator > (const Rational& rhs) const {
	return rhs < *this;
}
bool Rational::operator >= (const Rational& rhs) const {
	return !(*this < rhs);
}
bool Rational::operator == (const Rational& rhs) const {
	return this->num * rhs.den == this->den * rhs.num;
}
bool Rational::operator != (const Rational& rhs) const {
	return !(*this == rhs);
}

int main() {
	Rational a{5, 8}, b{3, 4};
	
	xr(a < b); xr(a <= b); xr(a > b);
	xr(a >= b); xr(a == b); xr(a != b);
	
	return 0;
}


