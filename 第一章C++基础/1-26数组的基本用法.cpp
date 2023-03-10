#include <iostream>

using namespace std;

template <typename T>
void inputArray(T a[], size_t n) {
	for (T *p = a; p != a + n; p ++) {
		cin >> *p;
	}
}

template <typename T, size_t N>
void printArray(T (&a)[N]) {
	cout << endl;
	for (auto i : a) {
		cout << i << "\t";
	}
}

int main() {
	const size_t N = 5;
	int a[N];
	cout << "Input with inputArray: " << endl;
	inputArray(a, N);
	cout << "Output with outputArray: ";
	printArray(a);
	
	return 0;
}