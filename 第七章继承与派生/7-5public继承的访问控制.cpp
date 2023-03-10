#include <iostream>

using namespace std;

class Base {
private:
	int a;
	void f() {
		cout << a << endl;
	}		
public:
	int b;
	void g() {
		cout << b << endl;
	}
protected:
	int c;
	void k() {
		cout << c << endl;
	}	
};

class Derived : public Base {
public:
	void df() {
		//?	cout << a;
		cout << b << endl;
		cout << c << endl;
		
		//?	f();
		g();
		k();
	}	
};

void test() {
	Base bas;
	//? cout << bas.a;
	cout << bas.b;
	//? cout << bas.c;
	//? bas.f();
	bas.g();
	//? bas.k();
	
	Derived der;
	der.df();
	der.b = 200;
	der.g();
}

int main() {
	test();
	return 0;
}