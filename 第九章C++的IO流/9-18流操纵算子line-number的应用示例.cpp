#include <iostream>
#include <iomanip>

using namespace std;

class line_number {
private:
	int num;
	int width;
public:
	line_number(int n, int w) : num(n), width(w) {}
	
	friend ostream& operator << (ostream& os, const line_number& rhs) {
		os << "#" << setw(rhs.width) << setfill('0') << rhs.num
			<< setfill(' ');
		return os;
	}
};

int main() {
	cout << line_number(__LINE__, 2) << ": Hello\n"
		<< line_number(__LINE__, 5) << ": 1 + 2 = " << 1 + 2 << endl;
}