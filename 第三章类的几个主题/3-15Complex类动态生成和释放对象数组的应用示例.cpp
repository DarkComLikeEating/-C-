#include <iostream>
#include <complex> 
#include <algorithm>

using namespace std;

using complexd = complex<double>;

int main() {
	const size_t N = 2;
	complexd* p = new complexd[N];
	
	for (size_t idx = 0; idx != N; idx ++) {
		p[idx] = complexd (idx + 1.0, idx + 2.0);	
	}
	
	auto f{ [](auto z) {
		cout << cnoj(z) << endl;
	}};
	
	for_each(p, p + N, f);
	
	delete[] p;
	
	return 0;
}