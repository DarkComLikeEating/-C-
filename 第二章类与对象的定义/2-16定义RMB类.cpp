#include <iostream>

using namespace std;

class RMB {
private:
	int yuan, jiao, fen;
public:
	RMB(int y, int j, int f) 
		: yuan(y), jiao(j), fen(f) {}
	RMB(double d = 0) {
		int n = int(d * 100);
		yuan = n / 100;
		jiao = (n - 100 * yuan) / 10;
		fen = n % 10;
	}
	double toDouble() {
		return yuan + jiao/ 10.0 + fen / 100.0;
	}
	void Print() {
		cout << yuan << "元" << jiao << "角" << fen << "分" << endl;
	}
};

int main() {
	RMB r1{10, 5, 8}; r1.Print();
	RMB r2{19.86}; r2.Print();
	
	RMB r3(r1.toDouble() + r2.toDouble());
	r3.Print();
	
	return 0;
}