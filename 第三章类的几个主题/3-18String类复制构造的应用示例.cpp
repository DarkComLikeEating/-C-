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
	String(const String& s) {
		if (this != &s) {
			this->sz = s.sz;
			this->ps = new char [sz + 1];
			assert(this->ps != nullptr);
			strcpy(this->ps, s.ps);
		}
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
	String s1{"Hello", 5};
	xrv(s1.Print());
	
	String s2{s1};
	xrv(s2.Print());
	
	String* p2 = new String{s2};
	xrv(p2->Print());
	delete p2;
	
	return 0;
}