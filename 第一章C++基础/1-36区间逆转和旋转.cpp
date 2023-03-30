#include <iostream>
#include "print.hpp"

using namespace std;

template <typename T>
void my_reverse(T* a, T* b) {
	T t, *p = a, *q = --b;
	while (p < q) {
		t = *p, * p = *q, * q = t;
		++ p, -- q;
	}
}

template <typename T>
void my_rotate(T* a, T* b, T* c) {
	my_reverse(a, b);
	my_reverse(b, c);
	my_reverse(a, c);
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	auto n = sizeof(a) / sizeof(*a);
	
	my_reverse(a, a + n);
	/*
	cout << "reverse:\t";
	for (int i : a)  
		cout << i << "\t";
	cout << endl;
	*/
	print(a, a + n, "reverse:\t");
	
	my_rotate(a, a + 3, a + n);
	/*
	cout << "rotate:\t";
	for (int i : a)  
		cout << i << "\t";
	cout << endl;
	*/
	print(a, a + n, "rotate:\t");
}