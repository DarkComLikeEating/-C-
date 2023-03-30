#include "xr.hpp"

using namespace std;

class Base {
private:
	int n;
public:
	void nvf() {
		cout << "Base::nvf" << endl;
	}
	virtual void vf1() {
		cout << "Base::vf1" << endl;
	}
	virtual void vf2() {
		cout << "Base::vf2" << endl;
	}
	virtual void vf3() {
		cout << "Base::vf3" << endl;
	}
};

class Derived : public Base {
public:
	void nvf() {
		cout << "Derived::nvf" << endl;
	}
	virtual void vf1() {
		cout << "Derived::vf1" << endl;
	}
	virtual void vf2() {
		cout << "Derived::vf2" << endl;
	}
};

int main() {
	Derived d;
	Base *p = &d;
	xrv(p->nvf());
	xrv(p->vf1());
	xrv(p->vf2());
	xrv(p->vf3());
	
	return 0;
}