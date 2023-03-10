#include "xr.hpp"

class add {
public:
	double operator () (double x, double y) {
		return x + y;
	}
};

int main() {
	add a;
	xr(a(1, 2));
	xr(add()(3, 4));
	
	return 0;
}