#include "xr.hpp"
#include <iostream>
#include <utility>

using namespace std;

void g(int &x) {
	cout << "g(int &x)" << endl;
}
void g(const int &x) {
	cout << "g(const int &x)" << endl;
}
void g(int &&x) {
	cout << "g(int &&x)" << endl;
}
void g(const int &&x) {
	cout << "g(const int &&x)" << endl;
}

template <typename T>
void f(T &&t) {
	g(forward<T>(t));
}

int main() {
	int a, b;
	const int c = 1;
	const int d = 0;
	
	// ?
	xrv(f(a));
	xrv(f(move(b)));
	xrv(f(c);
	xrv(f(move(d)));
}
