#include "xr.hpp"

struct Date {
	int year, month, day;
};

class Time {
public:
	int hour, minute, second;
};

int main() {
	Date d {2008, 8, 8};
	Time t {20, 0, 0};
	xr(d.year); xr(d.month); xr(d.day);
	xr(t.hour); xr(t.minute); xr(t.second);
	
	return 0;
}