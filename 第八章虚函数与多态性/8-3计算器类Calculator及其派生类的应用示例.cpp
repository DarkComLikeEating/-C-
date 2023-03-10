#include <iostream>
#include <vector>

using namespace std;

class Calculator {
public:
	virtual const char* DoWhat() const {
		return "Computing";
	}
	virtual double Compute (double a, double b) {
		return 0;
	}
};

class Add : public Calculator {
public:
	virtual const char* DoWhat() const {
		return "Add";
	}
	virtual double Compute(double a, double b) {
		return a + b;
	}
};

class Sub : public Calculator {
public:
	virtual const char* DoWhat() const {
		return "Sub";
	}
	virtual double Compute(double a, double b) {
		return a - b;
	}
};

class Mul : public Calculator {
public:
	virtual const char* DoWhat() const {
		return "Mul";
	}
	virtual double Compute(double a, double b) {
		return a * b;
	}
};

class Div : public Calculator {
public:
	virtual const char* DoWhat() const {
		return "Div";
	}
	virtual double Compute(double a, double b) {
		return a / b;
	}
};

int main() {
	vector<Calculator *> vpc;
	vpc.push_back(new Add());
	vpc.push_back(new Sub());
	vpc.push_back(new Mul());
	vpc.push_back(new Div());
	
	for (int i = 0; i < vpc.size(); i ++) {
		cout << vpc[i]->DoWhat() << ": " << vpc[i]->Compute(12, 4) << endl;
		delete vpc[i];
	}
	
	return 0;
}
