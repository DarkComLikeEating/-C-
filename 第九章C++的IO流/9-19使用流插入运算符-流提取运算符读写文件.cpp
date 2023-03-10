#include "verify.hpp"
#include "xr.hpp"

using namespace std;

int main() {
	const char* filename = "9-19Data.txt";
	
	ofstream ofs {filename};
	
	ofs << "Hello" << "\t" << 2008 << '!' << endl;
	
	ofs.close();
	
	ifstream ifs {filename};
	
	char buffer[80];
	int n;
	char ch;
	ifs >> buffer 
		>> ws
		>> n
		>> ch
		>> ws;
	xr(buffer); xr(n); xr(ch);
	
	ifs.close();
}