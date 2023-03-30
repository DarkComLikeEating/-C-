#include <fstream>

using namespace std;

int main() {
	const char* srcfilename = "9-20main.cpp";
	const char* destfilename = "9-20copy.txt";
	
	ifstream ifs {srcfilename};
	ofstream ofs {destfilename};
	
	char ch;
	while (ifs.get(ch))
		ofs.put(ch);
		
	ofs.close();
	ifs.close();
}