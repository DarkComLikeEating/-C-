#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string  name;
	int age;
public:
	Person(const char* n, int a)
		:name(n), age(a) {}
	void PrintPerson() const {
		cout << name << "\t" << age << endl;
	}
};

class Student : public Person {
protected:
	double score;
public:
	Student(const char* n, int a, double s) 
		:Person(n, a), score(s) {}
	void PrintStudent() {
		cout << name << "\t" << age << "\t" << score << endl;
	}
};

class Undergratuate : public Student {
private:
	string speciality;
public:
	Undergratuate(const char* n, int a, double s, char* sp) 
		:Student(n, a, s), speciality(sp) {}
	void PrintUndergratuate() {
		cout << name << "\t" << age << "\t"
		<< score << "\t" << speciality << endl;
	}
};

int main() {
	Person Tom("Tom", 20);
	Tom.PrintPerson();
	
	Student Jerry("Jerry", 18, 90);
	Jerry.PrintStudent();

	Undergratuate Mickey{"Mickey", 22, 85, "MBA"};
	Mickey.PrintUndergratuate();
	
	return 0;
}
