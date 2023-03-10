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
	String operator = (const String& rhs) {
		if (this != &rhs) {
			if (this->sz != rhs.sz) {
				this->sz = rhs.sz;
				delete [] this->ps;
				this->ps = new char[this->sz + 1];
				assert(this->ps != nullptr);
			}
			strcpy(this->ps, rhs.ps);
		}
		return *this;
	}
	String(String&& s) noexcept {
		if (this != &s) {
			this->sz = move(s.sz);
			this->ps = s.ps;
			s.sz = 0;
			s.ps = nullptr;
		}
	}
	String& operator = (String&& rhs) noexcept {
		if (this != &rhs) {
			this->sz = move(rhs.sz);
			delete [] this->ps;
			this->ps = rhs.ps;
			
			rhs.sz = 0;
			rhs.ps = nullptr;
		}
		return *this;
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
	String s1{"Hello", 5}, s2;
	xrv(s1.Print());
	
	s2 = move(s1);
	xrv(s2.Print());
	
	return 0;
}