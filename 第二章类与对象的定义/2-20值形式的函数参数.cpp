#include "xr.hpp"

using namespace std;

class Square {
private:
	double length;
public: 
	Square(double l = 0) noexcept 
		: length(l) {
			cout << "ctor:\t" << length << endl;
		}
	Square(const Square& s)
		: length(s.length) {
			cout << "cpctor:\t" << length << endl;
		}
	~Square() noexcept {
		cout << "dtor:\t" << length << endl;
	}
	double Area() const {
		return length * length;
	}
};	

void PrintArea(Square s) {
		cout << "in PrintArea...\n";
		cout << s.Area() << endl;
}

int main() {
	Square a = 10;
	cout << "entering PrintArea..." << endl;
	PrintArea(a);
	cout << "leaving main..." << endl;
	
	return 0;
}