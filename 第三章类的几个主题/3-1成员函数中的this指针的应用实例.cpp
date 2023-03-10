#include "xr.hpp"

using namespace std;

class Example
{
private:
	int n;

public:
	Example(int m = 0) noexcept
	{
		this->n = m;
		cout << this << endl;
	}
	~Example() noexcept
	{
		xr(this);
	}
	void Print() const
	{
		cout << this << "\t" << this->n << endl;
	}
};

int main()
{
	xrv(Example a = 1);
	xrv(Example b);
	xr(&a);
	xr(&b);
	xrv(a.Print());
	xrv(b.Print());

	return 0;
}