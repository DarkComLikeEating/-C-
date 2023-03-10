#include <string>
#include "xr.hpp"

using namespace std;

class Zealot {
private:
	string name;
	int life_value;
public:
	Zealot(const char* s, int lv) :name(s), life_value(lv) {
		cout << "ctor:\t" << name << " born with life value "
		<< life_value << endl;
	}
	Zealot(const Zealot& z) :name(z.name), life_value(z.life_value) {
		cout << "cctor:\t" << name << " born with life value"
		<< life_value << endl;
	}
	~Zealot() noexcept {
		life_value = 0;
		cout << "dtor:\t" << name << " died with life value " 
		<< life_value << endl;
	}
};

int main() {
	xrv(Zealot* a = new Zealot("Za", 50));
	xrv(Zealot* b = new Zealot(*a));
	xrv(Zealot* c = new Zealot("Zc", 100));
	
	xrv(delete a);
	xrv(delete b);
	xrv(delete c);
	
	return 0;
}