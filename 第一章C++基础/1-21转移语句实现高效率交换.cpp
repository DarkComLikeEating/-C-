#include <iostream>

using namespace std;

template <typename T>
void my_swap(T &a, T &b) {
	T t = move(a);
	a = move(b);
	b = move(t);
}
	
int main() {
	int m = 5, n = 3;
	my_swap(m, n);
	cout << m << "\t" << n << endl;
}	