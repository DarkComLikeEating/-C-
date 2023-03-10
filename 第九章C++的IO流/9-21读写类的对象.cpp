#include <string>
#include "verify.hpp"
//#include <fstream>

using namespace std;

class Student {
private:
	size_t id;
	string name;
	int age;
	double score;
public:
	Student(size_t i = 0, const char* n = "", int a = 0, double s = 0)
		: id(i), name(n), age(a), score(s) {}
	friend ostream& operator << (ostream& os, const Student& rhs) {
		os << rhs.id << "\t" << rhs.name << "\t" 
			<< rhs.age << "\t" << rhs.score << endl;
		return os;
	}
};

int main() {
	Student s[]{ Student{2008001, "Tom", 18, 85},
					Student{2008002, "Jerry", 22, 95},
					Student{2008003, "Mike", 20, 80},
					Student{2008004, "John", 19, 90} };
	auto n = sizeof(s) / sizeof(*s);
	const char* filename{ "9-21Student.txt" };
	// binary
	ofstream ofs{ filename, ios::binary };
	
	ofs.write((const char*)&n, sizeof(n));
	size_t idx = 0;
	while (ofs && idx != n) {
		ofs.write((const char*)&s[idx], sizeof(s[idx]));
		++ idx;
	}
	ofs.close();
}