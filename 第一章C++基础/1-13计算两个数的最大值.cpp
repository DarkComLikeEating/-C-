#include <iostream>
#include <cstring>
#include "xr.hpp"

using namespace std;

char my_max(char a, char b) 		{return a > b ? a : b;}
char *my_max(char *a, char *b) 		{return strcmp(a, b) > 0 ? a : b;}
int my_max(int a, int b) 			{return a > b ? a : b;}
int my_max(int a, int b, int c) {
	int t = my_max(a, b);
	return my_max(t, c);
}

int main() {
	xr(my_max('a', 'b'));
	xr(my_max("ab", "a"));
	xr(my_max(20, 10));
	xr(my_max(20, 10, 30));
	
	return 0;
}