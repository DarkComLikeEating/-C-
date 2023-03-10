#include <cassert>
#include "xr.hpp"

using namespace std;

int main() {
	int *pn = new int;
	assert(pn != nullptr);
	*pn = 1;
	xr(*pn);
	delete pn;
	
	char *pc = new char('A');
	assert(pc != nullptr);
	xr(*pc);
	delete pc;
	
	return 0;
}