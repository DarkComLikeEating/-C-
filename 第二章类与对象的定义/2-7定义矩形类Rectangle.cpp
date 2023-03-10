#include "xr.hpp"

using namespace std;

class Rectangle {
private:
	double length, width;
public:
	double& Length() {return length;}
	double& Width() {return width;}
	
	const double& Length() const {return length;}
	const double& Width() const {return width;}
};
Rectangle makeRectangle(double l, double w) {
	Rectangle r;
	r.Length() = l; 
	r.Width() = w;
	return r;
}

double Area(const Rectangle& r) {
	return r.Length() * r.Width();
}

int main() {
	xr(Area(makeRectangle(10, 20)));
	
	return 0;
}