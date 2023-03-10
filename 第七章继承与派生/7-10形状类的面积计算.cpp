#include "xr.hpp"

class Square {
private:
    double length;
    double area;
public:
    Square(double l) :length(l) {
        area = length * length; 
    }
    double Area() const {
        return area;
    }
};

class Circle {
private:
    double radius;
    double area;
public:
    Circle(double r) : radius(r) {
        area = 3.14 * radius * radius;
    }
    double Area() {
        return area;
    }
};

int main() {
    Square s{10}; xr(s.Area());
    Circle c{10}; xr(c.Area());

    return 0;
}