#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(const char* n, int a) 
		: name(n), age(a) {}
	void PrintPerson() const {
		cout << name << "\t" << age << endl;
	}
};

class Student : public Person {
private:
	double score;
public:
	Student(const char* n, int a, double s) 
		:Person(n, a), score(s) {}
	void PrintStudent() const {
		PrintPerson();
		cout << score << endl;
	}
};

int main() {
	Person Tom("Tom", 20);
	Tom.PrintPerson();
	
	Student Jerry("Jerry", 18, 90);
	Jerry.PrintStudent();
	
	return 0;
}
