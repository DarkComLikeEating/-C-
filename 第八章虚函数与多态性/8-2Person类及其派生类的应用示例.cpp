#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person(const char* sn = "", int a = 0) noexcept 
	: name(sn), age(a) {}
	virtual void Print (ostream& os = cout) const {
		os << name << "\t" << age << endl;
	}
};

class Worker : public Person {
public:
	Worker(const char* sn = "", int a = 0) noexcept 
	: Person(sn, a) {}
};

class Student : public Person {
protected:
	double score;
public:
	Student(const char* sn = "", int a = 0, double s = 0) noexcept 
	: Person(sn, a), score(s) {}
	virtual void Print(ostream& os = cout) const {
		os << name << "\t" << age << "\t" << score << endl;
	}
};

class Gratuate : public Student {
protected: 
	string focus;
public:
	Gratuate(const char* sn = "", int a = 0, double s = 0, const char* f  = "")
	: Student(sn, a, s), focus(f) {}
	virtual void Print(ostream& os = cout) const {
		os << name << "\t" << age << "\t" << score << "\t" << focus << endl;
	}
};

int main() {
	Person* pa[4];
	pa[0] = new Person("Tom", 20);
	pa[1] = new Worker("Goofy", 25);
	pa[2] = new Student("Jerry", 18, 90);
	pa[3] = new Gratuate("Mickey", 22, 88, "IS");
	
	for (int i = 0; i < 4; i ++) {
		pa[i]->Print();
		delete pa[i];
	}
	
	return 0;
}