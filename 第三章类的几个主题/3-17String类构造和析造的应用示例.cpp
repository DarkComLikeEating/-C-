#include <algorithm>
#include <cstring>
#include <cassert>
#include "xr.hpp"

using namespace std;

class String {
private:
	char* ps;
	size_t sz;
public:
	String(const char* s = "", size_t n = 0) noexcept {
		sz = min(n, strlen(s));
		ps = new char[sz + 1];
		assert(ps != nullptr);
		strncpy(ps, s, sz);
		ps[sz] = '\0';
	}
	~String() noexcept {
		delete[] ps;
		ps = nullptr;
		sz = 0;
	}
	void Print() {
		cout << sz << ":" << ps << endl;
	}
};

int main() {
	String s{"Hello", 5};
	xrv(s.Print());
	
	String* p = new String{"Hello", 3};
	xrv(p->Print());
	delete p;
	
	return 0;
}