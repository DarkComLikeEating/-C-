#include <string>

class Person {
private:
	std::string name;
	int age;
public:
	const std::string& Who() const {
		return name;
	}
	int HowOld() const {
		return age;
	}
};

class Student : public Person {
private:
	double score;
public:
	double Score() const {
		return score;
	}
};

int main() {
	return 0;
}