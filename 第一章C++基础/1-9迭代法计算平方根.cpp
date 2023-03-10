#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double my_sqrt(double x) {
	// cout << "entering " << _func_ << endl;
	double xnew, xold(x / 2.0);
	for (; ; ){
		xnew = (xold + x / xold) / 2.0;
		if (fabs(xnew - xold) < 1e-8)
			break;
		xold = xnew;
	}
	
	return xnew;
}

int main() {
	// cout << "entering " << _func_ << endl;
	double a(2);
	cout << setprecision(8) << my_sqrt(a) << endl;
	
	return 0;
}