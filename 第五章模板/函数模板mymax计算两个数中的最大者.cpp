#include <typeinfo>
#include "xr.hpp"

using namespace std;

template <typename T>
T mymax(T a, T b) {
	cout << typeid(T).name() << "\t";
	return a > b ? a : b;
}

int main() {
	xr(mymax('x', 'X'));
	xr(mymax(3, 5));
	xr(mymax(3.14, 3.4));
	
	return 0;
}