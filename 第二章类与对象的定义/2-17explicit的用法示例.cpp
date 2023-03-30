class Example {
public:
	explicit Example(int n) {} 
	explicit operator int() {return int{};}
};

void f(Example e) {}

int main() {
	Example e = 1;
	//? e = 2;
	//? f(3);
	return 0;
}