#include <iostream>
#include <algorithm>	// for copy
#include <vector>		// for vector
#include <cctype>		// for ispunct
#include <string>
#include <iterator>

using namespace std;

void removePunctuation(string& s) {
	auto iter{s.begin()};
	while ((iter = find_if(iter, s.end(), ispunct)) != s.end()) {
		s.erase(iter);
	}
}

int main() {
	char buffer[80];
	vector<string> vs;
	
	cout << "Please enter one sentence:\n";
	while (cin >> buffer) {
		string s{buffer};
		removePunctuation(s);
		vs.push_back(s);
	}
	
	cout << "Words in this sentence: \n";
	ostream_iterator<string> screen (cout, "\t");
	copy(vs.begin(), vs.end(), screen);
	cout << endl;
}