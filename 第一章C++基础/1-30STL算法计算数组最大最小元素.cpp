#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[] = {10, 20, 10, 50, 10, 50};
	auto n = sizeof(a) / sizeof(*a);
	
	auto p = min_element(a, a + n);
	cout << "first min element " << *p << " at " << p - a << ".\n";
	p = max_element(a, a + n);
	cout << "first max element " << *p << " at " << p - a << ".\n";
	auto [pmin, pmax] = minmax_element(a, a + n);
	cout << "first min element: " << *pmin << endl
		<< "first max element: " << *pmax << endl;
		
		return 0;
}