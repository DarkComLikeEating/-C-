#include "xr.hpp"

void set_zero_by_val(int n) {
	n = 0;
}

void set_zero_by_ptr(int *pn) {
	*pn = 0;
}

void set_zero_by_ref(int &n) {
	n = 0;
}

int main() {
	int m { 1 };
	set_zero_by_val(m);		xr(m);
	m = 1;
	set_zero_by_ptr(&m);	xr(m);
	m = 1;
	set_zero_by_ref(m);		xr(m);
	return 0;
}