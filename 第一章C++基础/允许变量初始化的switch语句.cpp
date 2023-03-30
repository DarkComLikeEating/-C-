#include <iostream>

using namespace std;

int main() {
	switch (auto x{ cin.get() }; x) {
		case 'a': cout << "left";	break;
		case 'w': cout << "forward";	break;
		case 's': cout << "right";	break;
		case 'd': cout << "backword";	break;
		case 'q': cout << "quit";	break;
	}
	return 0;
}