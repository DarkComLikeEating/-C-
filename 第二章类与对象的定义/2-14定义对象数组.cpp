#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	double score;
public:
	Student(const char* sn = "", double ds = 0) noexcept
		: name(sn), score(ds) {
		cout << "ctor:\t" << name << "\t" << score << endl;
		}
	~Student() noexcept {
		cout << "dtor:\t" << name << "\t" << score << endl;
	}
	void Print() {
		cout << "Prnt:\t" << name << "\t" << score << endl;
	}
};

int main() {
	const size_t N = 2;
	Student s[N];
	
	s[0] = Student{"Tom", 85};
	s[1] = Student{"Jerry", 90};
	for (auto i = 0; i != N; i ++) {
		s[i].Print();
	}
	
	return 0;
}