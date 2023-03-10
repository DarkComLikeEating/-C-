#include <string>
#include "xr.hpp"

using namespace std;

class Worker {
private:
	size_t id;
	string name;
	double salary;
public:
	Worker(size_t i = 0, const char* s = "", double d = 0)
		:id{ i }, name{ s }, salary{ d }
	{}
	void Print() {
		cout << id << "\t" << name << "\t" << salary << endl;
	}
};

int main() {
	Worker w; xrv(w.Print());
	Worker a = {20001, "Tom", 2000};
	xrv(a.Print());
	Worker b = {20002, "Jerry", 1800};
	xrv(b .Print());
	
	return 0;
}