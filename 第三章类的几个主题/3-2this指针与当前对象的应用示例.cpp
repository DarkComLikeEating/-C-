#include "xr.hpp"

using namespace std;

class Rational {
private:
	int num;
	int den;
public:
	Rational(int n = 0, int d = 1) noexcept {
		this->num = n;
		this->den = d;
	}
	void Print() const {
		cout << this->num << "/" << this->den << endl;
	}
	Rational& operator = (const Rational& rhs) {
		this->num = rhs.num;
		this->den = rhs.den;
		return *this;
	}
	bool Equal(const Rational& rhs) const {
		return this->num * rhs.den == this->num * rhs.den;
	}
};

int main() {
	Rational a{3, 4}, b;
	b = Rational(6, 8);
	xrv(a.Print());
	xrv(b.Print());
	xr(a.Equal(b));
	
	return 0;
}