#include <iostream>
#include <initializer_list>

using namespace std;

class IntArray {
private:
	enum {SIZE = 100};
	int arr[SIZE];
	size_t sz;
public:
	int& at(size_t idx) {
		return arr[idx];
	}
	const int& at (size_t idx) const {
		return arr[idx];
	}
	
	size_t& size() {
		return sz;
	}
	const size_t& size() const {
		return sz;
	}
};

auto makeIntArray(initializer_list<int> il) {
	IntArray ia;
	ia.size() = il.size();
	size_t i = 0;
	for (auto p = il.begin(); p != il.end(); ++ p) {
		ia.at(i ++) = *p;
	
	}
	return ia;
}

void Print(const IntArray& ia) {
	for (size_t i = 0; i < ia.size(); ++ i) {
		cout << ia.at(i) << "\t";
	}
	cout << endl;
}

int main() {
	Print(makeIntArray({1, 2, 3, 4, 5}));
	
	return 0;
}