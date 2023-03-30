#include <iostream>

using namespace std;

class Base {
protected:
	int n;
public:
	Base() noexcept : n(0) {
		cout << "Base::Base\n";
	}
	~Base() noexcept {
		cout << "Base::~Base\n";
	}
};

class Derived : public Base {
	int m;
public:
	Derived(int a) : m(a) {
		cout << "Derived::Derived\n";
	}
	~Derived() noexcept {
		cout << "Derived::~Derived\n";
	}
	void Print() const {
		cout << n << "\t" << m << endl;
	}
};

int main() {
	Derived d{1};
	d.Print();
}