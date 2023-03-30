#include <cassert>
#include <iostream>

using namespace std;

int main() {
	size_t size;
	cout << "Please enter size of array: ";
	cin >> size;
	
	int *parray = new int[size];
	assert(parray != nullptr);
	
	for (size_t i = 0; i != size; ++ i) {
		parray[i] = int(i);
	}
	for (int* i = parray; i < parray + size; i ++) {
		cout << *i << "\t";
	}
	
	delete [] parray;
	
	return 0;
}