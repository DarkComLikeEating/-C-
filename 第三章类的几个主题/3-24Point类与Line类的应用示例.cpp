#include <cmath>
#include "xr.hpp"

using namespace std;

class Line;

class Point {
private:
	double x, y;
public:
	Point(double nx, double ny)
		:x(nx), y(ny) {}
	
	friend bool ptOnLine(const Point& p, const Line& l);
	friend double distPoint2Line(const Point& p, const Line& l);	
};

class Line {
private:
	double a, b, c;
public:
	Line(double na, double nb, double nc)
		:a(na), b(nb), c(nc) {}
	
	friend bool ptOnLine(const Point& p, const Line& l);
	friend double distPoint2Line(const Point& p, const Line& l);
};

bool ptOnLine(const Point& p, const Line& l) {
	return p.x * l.a + p.y * l.b + l.c == 0;
}
double distPoint2Line(const Point& p, const Line& l) {
	return fabs(p.x * l.a + p.y * l.b + l.c) /
		sqrt(double(l.a * l.a + l.b * l.b));
}

int main() {
	Point p{0, 0};
	Line l{3, 4, -5};
	
	if (!ptOnLine(p, l)) 
		xr(distPoint2Line(p, l));
		
	return 0;
}