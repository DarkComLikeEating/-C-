class Book {
public:
	void Read() {}
};

class Newspaper {
public:
	void Browse() {}
};

class MusicPlayer {
public:
	void ListenTo() {}
};

class EBook: public Book, public Newspaper, public MusicPlayer {
	void SurfOnWeb() {}
};

int main() {
	return 0;
}