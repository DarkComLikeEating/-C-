#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
	string SID;
	string name;
	int score;
	
	Student(string id = "", string n = "", int s = 0) 
		:SID(id), name(n), score(s) {}
		
//?	bool operator < (const Student& rhs) const {
//?		return this->SID < rhs.SID;
//?	}
	friend bool cmpBySID(const Student& lhs, const Student& rhs);
};

bool cmpBySID(const Student& lhs, const Student& rhs) {
	return lhs.SID < rhs.SID;
}

class cmpByName {
public:
	bool operator () (const Student& lhs, const Student& rhs) const {
		return lhs.name < rhs.name;
	}
};

int main() {
	Student Lab[] = {Student("01", "Okabe", 75),
					Student("03", "Kurisu", 100),
					Student("02", "Mayuri", 90)};
	int n = sizeof(Lab) / sizeof(*Lab);
	
	sort(Lab, Lab + n, cmpBySID);
	sort(Lab, Lab + n, cmpByName());
	sort(Lab, Lab + n, [](const Student& lhs, const Student& rhs) {
		return lhs.score > rhs.score;
	});
	
	for_each(Lab, Lab + n, [](Student a) {
		cout << a.SID << "\t" << a.name << "\t" << a.score << endl;
	});
	
	return 0;
}