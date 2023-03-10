#include "xr.hpp"

using namespace std;

int main() {
	int a[] = {23, 42, 15, 64, 75, 60};
	auto n = sizeof(a) / sizeof(*a);
	
	auto f1{[](int x) {return x % 2 == 0;}};
	xr(all_of(a, a + n, f1));
	
	auto f2{[](int x) {return x % 2 != 0;}};
	xr(any_of(a, a + n, f2));
	
	auto f3{[](int x) {return x % 5 == 0;}};
	xr(none_of(a, a + n, f3));
	
	return 0;
}