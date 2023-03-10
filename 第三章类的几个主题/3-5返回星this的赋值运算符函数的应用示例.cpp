#include "xr.hpp"

using namespace std;

class CInt {
private:
	int n;
public:
	CInt(int m = 0) noexcept :n(m) {}
	CInt& operator = (const CInt& rhs) {
		if (this != &rhs) 
			n = rhs.n;
		return *this;
	}
	void Print() {
		cout << n << endl;
	}
};

int main() {
	CInt a = 1, b, c;
	c = b = a;
	xrv(a.Print()); xrv(b.Print()); xrv(c.Print());
	
	return 0;
}