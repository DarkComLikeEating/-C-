#include <cstring>
#include "xr.hpp"

using namespace std;

class Word {
private:
	char buffer[128];
	int length;
public:
	Word(const char* s = "") noexcept;
	Word(const Word& w);
	Word(Word&& w) noexcept;
	Word& operator = (const Word& rhs);
	~Word() noexcept {};
};
Word::Word(const char* s) noexcept {
	length = strlen(s);
	strcpy(buffer, s);
}
Word::Word(const Word& w) {
	length = w.length;
	strcpy(buffer, w.buffer);
	cout << "cp ctor:\t" << buffer << "\t" << length << endl;
}
Word::Word(Word&& w) noexcept {
	length = move(w.length);
	strcpy(buffer, w.buffer);
	cout << "mv ctor:\t" << buffer << "\t" << length << endl;
}
Word& Word::operator = (const Word& rhs) {
	length = rhs.length;
	strcpy(buffer, rhs.buffer);
	cout << "cp operator=:\t" << buffer << "\t" << length << endl;
	return *this;
}

int main() {
	Word a{"Hello"}, b;
	xrv(b = a);
	
	xrv(Word d = a);
	xrv(Word d2(move(d)));
	
	return 0;
}