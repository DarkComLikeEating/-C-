#include <iostream>
#include <string>

using namespace std;

enum class Color {red, green};

class Apple {
private:
	string buyer;
	Color color;
public:
	Apple(const char* s, Color c) 
		: buyer(s), color(c) {
		cout << buyer << " buys a " 
		<< (color == Color::red ? "red" : "green") << " apple." << endl;		
	}
	~Apple() noexcept {
		cout << "oop, eaten by " << buyer << "." << endl;
	}
};

int main() {
	Apple a = {"Tom", Color::red};
	Apple b = {"Jerry", Color::green};

	return 0;
}