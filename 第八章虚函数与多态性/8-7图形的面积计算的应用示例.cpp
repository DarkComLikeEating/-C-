#include <iostream>
#include <vector>

using namespace std;

class Shape {
public:
	virtual double Area() const = 0;
	virtual const char* Name() const = 0;
};

class Square : public Shape {
protected:
	double length;
public:
	Square(double l = 0) noexcept : length(l) {}
	virtual double Area() const {
		return length * length;
	}
	const char* Name() const {
		return "Square";
	}
};

class Rectangle : public Shape {
protected:
	double length, width;
public:
	Rectangle(double l = 0, double w = 0) noexcept
	: length(l), width(w) {}
	virtual double Area() const {
		return length * width;
	}
	const char* Name() const {
		return "Rectangle";
	}
};

class Circle : public Square {
public:
	Circle(double r = 0) noexcept : Square(r) {}
	virtual double Area() const {
		return 3.14 * length * length;
	}
	virtual const char* Name() {
		return "Circle";
	}
};

class Ellipse : public Rectangle {
public:
	Ellipse(double l = 0, double w = 0) noexcept : Rectangle(l, w) {}
	virtual double Area() const {
		return 3.14 * length * width;
	}
	virtual const char* Name() {
		return "Ellipse";
	}
};

void Print(Shape *ps) {
	cout << ps->Name() << ":\t" << ps->Area() << endl;
}

int main() {
	vector<Shape *> vps;
	vps.push_back(new Square(10));
	vps.push_back(new Rectangle(10, 20));
	vps.push_back(new Circle(10));
	vps.push_back(new Ellipse(10, 20));
	for (int i = 0; i < vps.size(); i ++) {
		Print(vps[i]);
		delete vps[i];
	}
	
	return 0;
}