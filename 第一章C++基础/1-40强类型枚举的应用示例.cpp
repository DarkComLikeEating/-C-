#include <iostream>

using namespace std;

enum class Gender {female, male};
enum class Color {red, green, blue};

int main() {
	Gender g = Gender::female;
	Color c = Color::red;
	if (g == Gender::female && c == Color::red) {
		cout << "Girls like red." << endl;
	}
	
	return 0;
}