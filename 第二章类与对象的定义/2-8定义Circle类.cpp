#include "xr.hpp"

using namespace std;

class Circle {
private:
	double radius;
public:
	Circle(double d = 0) {
		radius = d;
	}
	double Area() { return 3.14 * radius * radius; }
};

int main() {
	Circle a;			xr(a.Area())
	Circle c = 10;		xr(c.Area());
	Circle* p = &c;		xr(p->Area());
	Circle& r = c		xr(r.Area());
}