#include <iostream>
#include <initializer_list>

using namespace std;

int main() {
	int a[]{1, 2, 3, 4, 5, 6};
	
	for (auto n : a)
		n *= 10;
		
	for (auto n : a)
		cout << n << "\t";
	cout << endl;
	
	for (auto n : {12, 25, 67, 43, 89, 54})
		cout << n << "\t";
	cout << endl;
	
	return 0;
}