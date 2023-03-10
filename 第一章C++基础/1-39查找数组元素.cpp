#include <iostream>
#include <functional>

using namespace std;

template <typename T, class Function>
T myfind(T first, T last, Function pr) {
	for ( ; first != last; first ++) {
		if (pr(*first))
			break;
	}
	return first;
}

bool iseven (int n) {
	return n % 2 == 0;
}

int main() {
	int a[] = {1, 2, 3,4, 5, 6, 7, 8};
	auto n = sizeof(a) / sizeof(*a);
	
	auto p = myfind(a, a + n, iseven);
	if (p != a + n)
		cout << "first even is at " << p - a << ".\n";
		
	p = myfind(a, a + n, [](int n) {return n > 5;});
	if (p != a + n)
		cout << "first number(>5) is at " << p - a << ".\n";
		
	return 0;
		
		
}