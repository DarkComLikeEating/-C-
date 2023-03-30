#include <iostream>
#include <utility>		// for pair
#include <typeinfo>	// for RTTI
#include "xr.hpp"

using namespace std;

template <typename T>
T my_min(T a, T b) {return a < b ? a : b;}

template <typename T>
T my_max(T a, T b) {return a < b ? b : a;}

template <typename T>
pair<T, T> my_min_max(T a, T b) {
	T tn = my_min(a, b);
	T tm = my_max(a, b);
	return make_pair(tn, tm);
}

template <typename T>
void print(pair<T, T> p) {
	cout << typeid(T).name() << ": \t";
	cout << "(min: " << p.first
		<< ", max: " << p.second << ")\n";
}

int main() {
	xrv(print(my_min_max('a', 'b')));
	xrv(print(my_min_max(20, 10)));
	xrv(print(my_min_max(1.5, 2.5)));
}