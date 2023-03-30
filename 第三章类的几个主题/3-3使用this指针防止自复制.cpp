#include <string>
#include "xr.hpp"

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(const char *s = "", int a = 0)
		: name(s), age(a)
	{
	}
	Person(const Person &p)
	{
		if (this != &p)
		{
			name = p.name;
			age = p.age;
		}
	}
	Person(Person &&p) noexcept
	{
		if (this != &p)
		{
			name = move(p.name);
			age = move(p.age);
		}
	}
	void Print()
	{
		cout << name << "\t" << age << endl;
	}
};

int main()
{
	Person a("Tom", 20);
	xrv(a.Print());
	Person b{a};
	xrv(b.Print());
	Person c(move(b));
	xrv(c.Print());

	return 0;
}