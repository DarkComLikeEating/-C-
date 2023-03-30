#include <iostream>

using namespace std;

int main() {
	const int N = 5;
	int a[N];
	// std::ostream_iterator<int> screen(std::cout, "\t");
	
	fill(a, a + N, 1);
	cout << "fill:\t\t";
	for (auto i : a) 
		cout << i << "\t";
	cout << endl;
	
	generate(a, a + N, []() {return 10 + rand() % 90;});
	cout << "generate:\t";
	for (auto i : a)
		cout << i << "\t";
	cout << endl;
	
	return 0;
}