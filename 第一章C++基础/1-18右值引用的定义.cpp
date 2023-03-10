int f(int x) {
	return x * x;
}

int main() {
	int x{1}, y{2};
	const int N {10};
	
	bool &&rB{true};
	int &&rN{10};
	
	// ? int &&rN2{N};
	// ? int &&rX{x};
	
	int &&rXY{x + y};
	int &&rf{f(10)};
}