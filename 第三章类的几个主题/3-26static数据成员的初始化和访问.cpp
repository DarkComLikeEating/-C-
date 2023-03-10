class Example {
public:
	int n;
	static char c;
	static double d;
	static int arr[80];
public:
	Example(int m = 0) 
		:n(m) {}
};

double Example::d{2};
int Example::arr[80];

int main() {
	//? Example::c{'C'};
	//? Example::n{1};
	++ Example::d;
	Example::arr[1] = 2;
	
	Example t;
	t.n = 1;
	//? t.c = 'A';
	t.d = 1;
	t.arr[0] = 1;
	
	return 0;
}