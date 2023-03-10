#include "xr.hpp"

int main() {
	int m{3}, &r{m};	// define
	
	int a{(++r - m)};
	xr(a); xr(m);
	int b{(++ m, ++ r, m + r)};
	xr(b); xr(m);
	int c{(m *= 2, r + 10)};
	xr(c); xr(m);
}