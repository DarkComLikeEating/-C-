#include <iostream>

using namespace std;

int f(int m = 1) {
	return m;
}

//	int &f2(int n) {
//		int m = n;
//		return m;
//	}

//	int &&f3(int n) {
//		int m = n;
//		return m;
//	}

int &&f4(int n) {
	return n * f();
}

//	int &g(int n) {
//		return n * n;
//	}

int &&g2(int n) {
	return n * n;
}

int main() {
	int x = 10;
	
//	int &rf = f();
	int &&rf2 = f4(x);
	
//	int %rg = g2(x);
	int &&rg2 = g2(x);
	
	return 0;
}