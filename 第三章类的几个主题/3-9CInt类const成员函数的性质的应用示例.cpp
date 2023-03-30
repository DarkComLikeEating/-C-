#include "xr.hpp"

using namespace std;

class CInt {
private:
	int n;
public:
	CInt(int m = 0) noexcept :n(m) {}
	void SetN(int m) {n = m;}
	void Inc() {++ n;}
	int GetN() const {
		//? this->Inc()
		return n;
	}
	void Print() const {
		//? this->SetN(100);
		cout << this->GetN() << endl;
	}
};

int main() {
	CInt const a;
	//? a.SetN(10);
	//? a.Inc();
	xrv(a.Print());
	
	CInt b = 1;
	b.SetN(10);
	b.Inc();
	xrv(b.Print());
	
	return 0;
}