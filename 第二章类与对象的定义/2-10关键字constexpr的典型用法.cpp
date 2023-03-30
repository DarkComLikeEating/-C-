constexpr int Fib(int n) {
	return n == 1 ? 1 : (n == 2 ? 1 : Fib(n - 1) + Fib(n - 2));
}

class Date {
private:
	int year, month, day;
public:
	constexpr Date(int y, int m, int d) 
		:year(y), month(m), day(d)
	{}
	constexpr int GetYear() const {	return year; }
	constexpr int GetMonth() const { return month; }
	constexpr int GetDay() const { return day; }
};

int main() {
	constexpr int N = 3 * 5;
	int arr[N];
	arr[0] = 1;
	int arr2[Fib(5)];
	arr2[0] = 1;
	
	constexpr auto f = [](int n) { return 2 * n; };
	int arr3[f(3)];
	arr3[0] = 1;
	
	constexpr Date PRCfound = {1949, 10, 1};
	constexpr int foundMonth = PRCfound.GetMonth();
	
	return 0;
}