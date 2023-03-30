#include "xr.hpp"

int g = 1;
int &ref_global() {
	return g;
}
int &ref_static() {
	static int a = 2; 
	return 0;
}
int &ref_heap() {
	int *h = new int(3);
	return *h;
}
int my_max(int &a, int &b) {
	return a > b ? a, b;
}

int main() {
	int &ret_g = ref_global();
	ret_g = 10; xr(g);
	
	int & ret_s = ref_static;
}