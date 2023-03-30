int main() {
	int t = 1, s = 2;
	const int* p;
	p = &t;
	//*p = 10;
	p = &s;
	
	int* const q = &t;
	*q = 10;
	//? q = &s;
	
	const int* const r = &t;
	//? *r = 10;
	//? r = &s;
	
	int* pall;
	pall = &t;
	*pall = 10;
	pall = &s;
}