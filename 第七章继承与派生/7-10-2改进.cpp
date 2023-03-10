#include "xr.hpp"

class Shape {
protected:
    double area;
public:
    double Area() const {
        return area;
    }
};

class Square : public Shape {
private:
    double length;
public:
    Square(double l) :length(l) {
        area = length * length; 
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {
        area = 3.14 * radius * radius;
    }
};

int main() {
    Square s{10}; xr(s.Area());
    Circle c{10}; xr(c.Area());

    return 0;
}