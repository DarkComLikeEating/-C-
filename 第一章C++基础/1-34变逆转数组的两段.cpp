#include <iostream>

using namespace std;

int main() {
	int a[] = {3, 2, 1, 4, 5, 6};
	auto n = sizeof(a) / sizeof(*a);
	
	reverse(a, a + 2);
	reverse(a + 2, a + n);
	reverse(a, a + n);
	cout << "after reverse:\t";
	for (auto i : a)
		cout << i << "\t";
	cout << endl;
	
	return 0;
}