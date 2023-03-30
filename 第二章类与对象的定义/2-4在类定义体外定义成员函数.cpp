#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	double score;
public:
	void Set(const char*pn, double ds);
	void Print();	
};
void Student::Set(const char* pn, double ds) {
	name = pn;
	score = ds;
}
void Student::Print() {
	cout << name << ": " << score << endl;
}

int main() {
	Student s;
	s.Set("Tom", 85);
	s.Print();
	
	return 0;
}