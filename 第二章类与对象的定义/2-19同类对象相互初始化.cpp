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

int main() {
	xrv(Square s(10));
	xrv(Square t = s);
	xrv(Square r(t));
	xrv(Square q(r));
	
	return 0;
}