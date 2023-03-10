#include <iostream>

using namespace std;

class Rational {
private:
	int num, den;
public:
	Rational (int n = 0, int d = 1) noexcept
		:num(n), den(d) {}
	
	void Print() const {
		cout << this->num << "/" << this->den << endl;
	}
	
	Rational& operator = (const Rational& rhs) {
		this->den = rhs.den;
		this->num = rhs.num;
		return *this;
	}
	
	Rational Add(const Rational& rhs) const {
		Rational r;
		r.num = this->num * rhs.den + this->den * rhs.num;
		r.den = this->den * rhs.num;
		return r;
	}
};

int main() {
	Rational a{3, 4}, b{1, 2}, c;
	c = a.Add(b);
	a.Print(); b.Print(); c.Print();
	
	return 0;
}