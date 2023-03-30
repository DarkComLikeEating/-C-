#include <iostream>
#include <iomanip>

using namespace std;

ostream& showfloat (ostream& os) {
	os << setw(8) << setfill('0')
		<< fixed << internal
		<< showpoint << showpos;
	return os;
}

ostream& noshowfloat (ostream& os) {
	os << setw(6) << setfill(' ')
		<< noshowpoint << noshowpos;
	os.setf(ios::floatfield | ios::adjustfield);
	return os;
}

int main() {
	double d = 12;
	cout << showfloat << d
			<< noshowfloat << "\t" << d;
}