#include <iostream>
#include "xr.hpp"

int main() {
	int n{3};
	int &r{n};
	xr(n); xr(r);
	xr(&n); xr(&r);
	
	int m{5};
	r = m;
	xr(n); xr(r); xr(m);
	xr(&n); xr(&r); xr(&m);
	
	return 0;
}