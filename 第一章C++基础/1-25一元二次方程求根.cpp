#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

enum Status{TwoReals, SingleReal, TwoComplex};

using ResultType = tuple<Status, double, double>;

auto solve(double a, double b, double c) {
	double x1, x2;
	auto delta = b * b - 4 * a * c;
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		return make_tuple(TwoReals, x1, x2);
	} else if (delta == 0) {
		x1 = x2 = -b / (2 * a);
		return make_tuple(SingleReal, x1, x2);
	} else {
		x1 = -b / (2 * a);
		x2 = sqrt(-delta) / (2 * a);
		return make_tuple(TwoComplex, x1, x2);
	}
}

void print(const ResultType &ret) {
	auto [t, x, y] = ret;
	if (t == TwoReals) {
		cout << "TwoReals:\t" << x << ", " << y << endl;
	} else if (t == SingleReal) {
		cout << "SingleReal:\t" << x << endl;
	} else if (t == TwoComplex) {
		cout << "TwoComplex:\t" << x << "+" << y << "i, "
								<< x << "-" << y << "i" << endl;
	}
}

int main() {
	print(solve(1, -3, 2));
	print(solve(1, -4, 4));
	print(solve(1, -3, 20));
}