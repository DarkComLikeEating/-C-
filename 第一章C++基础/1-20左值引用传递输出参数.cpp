#include "xr.hpp"

void calc(int a, int b, int &c, int &d) {
	c = a + b;
	d = a - b;
}

int main() {
	int m = 5, n = 3, x, y;
	calc(m, n, x, y);
	xr(x); xr(y);
	return 0;
}