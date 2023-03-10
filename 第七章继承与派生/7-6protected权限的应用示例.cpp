#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	int age;
};

class Student : public Person {
private:
	double score;
public:
	void Print() const {
		cout << name << "\t" << age << "\t" << score << endl;
	}
};

int main() {
	return 0;
}