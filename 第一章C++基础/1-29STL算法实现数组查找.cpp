#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[] = {10, 20, 30, 30, 30, 40, 50, 70};
	auto n = sizeof(a) / sizeof(*a);
	int k = 30;
	
	if (binary_search(a, a + n, k);
		cout << "first " << k << " is found. ");
		
	auto p = find(a, a + n, k);
	if (p != a + n) 
		cout << "It is at " << p - a << ".\n";
		
	return 0;	
}