#include <iostream>
#include <cassert>

using namespace std;

class IntArray {
private:
	enum {SIZE = 20};
	int parr[SIZE];
	size_t sz;
public:
	IntArray(size_t s = 10) noexcept;
	size_t size() const {return sz;}
	
	int& operator [] (size_t idx);
	const int& operator [] (size_t idx) const;
};

IntArray::IntArray(size_t s) noexcept {
	sz = s > SIZE ? SIZE : s;
}
int& IntArray::operator [] (size_t idx) {
	assert(idx >= 0 && idx < sz);
	return parr[idx];
}
const int& IntArray::operator [] (size_t idx) const {
	assert(idx >= 0 && idx < sz) ;
	return parr[idx];
}

void fillArray(IntArray& ia) {
	for (size_t i = 0; i != ia.size(); i ++) {
		ia[i] = int(i + 1);
	}
}
void printArray(const IntArray ia) {
	cout << ia.size() << ": ";
	for (size_t i = 0; i < ia.size(); i ++) {
		cout << ia[i] << "\t";
	}
	cout << endl;
}

int main() {
	IntArray ia;
	
	fillArray(ia);
	printArray(ia);
	
	return 0;
}