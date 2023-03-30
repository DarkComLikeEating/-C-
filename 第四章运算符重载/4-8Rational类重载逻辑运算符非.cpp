#include "xr.hpp"

using namespace std;

class Rational {
private:
	int num, den;
public:
	explicit Rational(int n = 0, int d = 1) noexcept 
		:num(n), den(d) {}
	
	bool operator ! () const {
		return num == 0;
	}
};

int main() {
	Rational a{5, 6}, b;
	
	xr(!a);
	xr(!b);
	
	return 0;
}


