#include <string>
#include "xr.hpp"

using namespace std;

class Person {
private:
	string name;
	int age;
	double height;
public:
	void Set(const char* s, int a, double h) {
		name = s;
		age = a;
		height = h;
	}
	void Print() {
		cout << name << "\t" << age << "\t" << height << endl;
	}
};

int main() {
	Person aPerson;
	aPerson.Set("Tom", 20, 1.8); xrv(aPerson.Print());
	Person* p = &aPerson;
	p->Set("Jerry", 18, 1.7); xrv(aPerson.Print());
	Person& r = aPerson;
	r.Set("Goofy", 22, 1.6); xrv(aPerson.Print());

	return 0;
}