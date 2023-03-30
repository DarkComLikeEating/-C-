#include <iostream>
#include <algorithm>

using namespace std;

struct print {
	void operator () (int n) {
		cout << n << "\t";
	}
};

class inc {
public:
	void operator () (int& n) {
		++ n;
	}
};

int main() {
	int a[]{2, 1, 3, 6, 5, 4, 9, 8, 7};
	auto n{sizeof(a) / sizeof(*a)};
	
//	for_each(a, a + n, inc());
//	for_each(a, a + n, print());
	
	for_each(a, a + n,
	[](int& x) {++ x;});
	for_each(a, a + n, 
	[](int x) {cout << x << "\t";});
	
	return 0;
}