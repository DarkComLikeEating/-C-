#include "xr.hpp"

using namespace std;

class Date {
public:
	static const int numMonth{12};
	static int dayOfMonth[numMonth + 1];
};

int Date::dayOfMonth[] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	xr(Date::numMonth);
	xr(Date::dayOfMonth[1]);
	xr(Date::dayOfMonth[Date::numMonth]);
	
	return 0;
}