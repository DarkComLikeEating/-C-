#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	double score;
public:
	Student(const char* sn, double ds)
		: name(sn), score(ds)
	{
		cout << "ctor:\t" << name << "\t" << score << endl;
	}
	~Student() noexcept {
		cout << "dtor:\t" << name << "\t" << score << endl;
	}
};

int main() {
	Student a = {"Tom", 85};
	a = Student{"Jerry", 90};
	Student b = {"Goofy", 70};
	
	return 0;
}