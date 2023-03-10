#include "xr.hpp"

using namespace std;

class Square {
private:
	double length;
public: 
	Square(double l = 0) noexcept 
		: length(l) {
			cout << "ctor:\t" << &length << endl;
		}
	Square(const Square& s)
		: length(s.length) {
			cout << "cpctor:\t" << &length << endl;
		}
	Square(Square&& s) noexcept
		: length(move(s.length)) {
			cout << "mvctor:\t" << &length << endl;
		}
	~Square() noexcept {
		cout << "dtor:\t" << &length << endl;
	}
};	

Square MakeSquare(double d) {
	static Square s = d;
	cout << "leaving MakeSquare..." << endl;
	return s;
}

int main() {
	cout << "entering MakeSquare..." << endl;
	MakeSquare(10);
	cout << "leaving main..." << endl;
	
	return 0;
}