#include <functional>
#include "xr.hpp"

using namespace std;

int add(int a, int b) {return a + b;}

int main() {
	typedef int (*FuncType) (int, int);
	FuncType ft;
	
	ft = add; xr(ft(5, 3));
	
	auto sub = [](int a, int b) {return a - b;};
	ft = sub; xr(ft(5, 3));
	
	ft = [](int a, int b) {return a * b;};
	xr(ft(5, 3));
	
	function<int(int, int)> ff;
	ff = add; xr(ff(5, 3));
	ff = sub; xr(ff(5, 3));
	ff = [](int a, int b) {return a * b;};
	xr(ff(5, 3));
	
	return 0;
}