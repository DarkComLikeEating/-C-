#include <string>
#include "xr.hpp"

using namespace std;

class Song {
private:
	string singer;
	string title;
	double size;
public:
	Song(const Song& s);
	Song(const char* sg = "", const char* tl = "", double sz = 0) noexcept
		: singer(sg), title(tl), size(sz) {}

	void Print() {
		cout << singer << "\t" << title << "\t" << size << endl;
	}
};

Song::Song(const Song& s)
	: singer(s.singer), title(s.title), size(s.size) {}

int main() {
	Song original{"Mariah Carey", "Hero", 4705.61};
	xrv(original.Print());
	
	Song a{original}; xrv(a.Print());
	Song b{a}; xrv(b.Print());
	Song c{original}; xrv(c.Print());
	
	return 0;
}