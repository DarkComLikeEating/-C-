#include <iostream>

using namespace std;

int main() {
	cout.put('H').put('e');
	
	char s[]{"llo"};
	
	cout.put(s[0]).put(s[1]).put(s[2]);
	cout.put('\n');
	
	int n{65};
	cout.put(n).put(n + 1).put(n + 2);
	cout.put('\n');
	
	return 0;
}