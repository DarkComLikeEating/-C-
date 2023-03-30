#include <memory>
#include "xr.hpp"

using namespace std;

int main() {
	unique_ptr<int> pu1 {new int(10)};
	//? unique_ptr<int> pu2 = pu1;
	xr(*pu1);
	unique_ptr<int> pu3 = move(pu1);
	xr(*pu3);
	//? xr(*pu1);
	//? pu1 = pu3;
	pu3.reset(); pu1.reset();
	//? xr(*pu3);
	
	shared_ptr<int> ps1 {new int(20)};
	shared_ptr<int> ps2 = ps1;
	xr(*ps1); xr(ps2);
	ps1.reset();
	//? xr(*ps1);
	xr(*ps2);
	ps1 = ps2;
	xr(*ps1);
	
	return 0;
}