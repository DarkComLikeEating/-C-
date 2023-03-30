#include <iostream>
#include "xr.hpp"

using namespace std;

int add(int a, int b) {return a + b;}

int main() {
	int a{1}, b{2};
	xr(add(a, b));
	
	auto f{ [] (int x, int y) {return x + y;} };
	xr(f(a, b));
	
	auto f2{ [=] () {return a + b;} };
	xr(f2());
	
	auto f3{ [&] (int x) {a *= x; b *= x;} };
	f3(10);
	xr(a); xr(b);
	
	return 0;
}