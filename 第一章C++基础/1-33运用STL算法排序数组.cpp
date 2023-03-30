#include <iostream>

using namespace std;

int main() {
	int a[] = {2, -3, 1, -4, 2, 5, -6};
	auto n = sizeof(a) / sizeof(*a);
	
	sort(a, a + n);
	cout << "sort ascendingly: ";
	for (auto i : a)
		cout << i << "\t";
	cout << endl;
	
	sort(a, a + n, [](int a, int b) {return a > b;});
	cout << "sort descendingly: ";
	for (auto i : a)
		cout << i << "\t";
	cout << endl;
	
	sort(a, a + n, [](int a, int b) {return a * a < b * b;});
	cout << "sort by absolution: ";
	for (auto i : a)
		cout << i << "\t";
	cout << endl;
	
	return 0;
}