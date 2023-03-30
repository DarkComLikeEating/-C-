#include <iostream>

using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

class Rational {
private:
	int num, den;
public:
	void Set(int n, int d) {
		num = n;
		den = d == 0 ? 1 : d;
	}
	void Print() {
		cout << num << "/" << den << endl;
	}
	void Simplified();
	Rational Add(Rational r);
	Rational Sub(Rational r);
	Rational Mul(Rational r);
	Rational Div(Rational r);
};
void Rational::Simplified() {
	int r = gcd(num, den);
	num /= r;
	den /= r;
	if (den < 0) den *= -1, num *= -1;
}
Rational Rational::Add(Rational r) {
	Rational c;
	c.den = this->den * r.den;
	c.num = this->num * r.den + r.num * this->den;
	c.Simplified();
	return c;
}
Rational Rational::Sub(Rational r) {
	Rational c;
	c.den = this->den * r.den;
	c.num = this->num * r.den - r.num * this->den;
	c.Simplified();
	return c;
}
Rational Rational::Mul(Rational r) {
	Rational c;
	c.den = this->den * r.den;
	c.num = this->num * r.num;
	c.Simplified();
	return c;
}
Rational Rational::Div(Rational r) {
	Rational c;
	c.den = this->num;
	c.num = this->den;
	c = c.Mul(r);
	return c;
}

int main() {
	Rational a, b;
	a.Set(1, 2); a.Print();
	b.Set(2, 3); b.Print();
	a.Div(b).Print();
	return 0;
}