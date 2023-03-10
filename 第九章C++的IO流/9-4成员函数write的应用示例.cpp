#include <iostream>

using namespace std;

int main() {
	const char* s = "Hello";
	
	cout.write(s, 5).put('\n');
	cout.write(s, 2).write("\n", 1);
	
	int x = 1;
	cout.write((const char*)&x, sizeof(x));
	
	double d = 2.5;
	cout.write((const char*)&d, sizeof(d));
	
	return 0;
}