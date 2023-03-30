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
	Person &operator=(const Person &rhs)
	{
		if (this != &rhs)
		{
			name = rhs.name;
			age = rhs.age;
		}
		return *this;
	}
	Person &operator=(Person &&rhs) noexcept
	{
		if (this != &rhs)
		{
			name = move(rhs.name);
			age = move(rhs.age);
		}
		return *this;
	}
};

int main()
{
	Person a("Tom", 20), b, c;
	xrv(a.Print());
	a = a;
	b = a;
	xrv(b.Print());
	c = move(b);
	xrv(c.Print());

	return 0;
}