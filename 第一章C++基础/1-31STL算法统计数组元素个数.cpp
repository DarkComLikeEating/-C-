#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[] = {71, 78, 80, 70, 70, 69};
	auto n = sizeof(a) / sizeof(*a);
	
	int k = 70;
	auto m = count(a, a + n, k);
	cout << k << " presents " << m << " times." << endl;
	
	m = count_if(a, a + n, [](int n) {return n >= 70 && n <= 79;});
	cout << m << " elements between 70 and 79." << endl;
	
	return 0;
}