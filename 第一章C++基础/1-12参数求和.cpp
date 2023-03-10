#include <iostream>
#include "xr.hpp"

double add(double a, double b, double c, double d) {
	return a + b + c + d;
}

double add(double = 1, double  = 2, double = 3, double = 4);

int main() {
	xr(add());
	xr(add(10));
	xr(add(10, 20));
	xr(add(10, 20, 30));
	xr(add(10, 20, 30, 40));
	
	return 0;
}