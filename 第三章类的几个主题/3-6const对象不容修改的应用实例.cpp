class Object {
public:
	int n;
public:
	Object(int m = 0) noexcept : n(m) {}
	Object& operator = (const Object& rhs) {
		if (this != &rhs)
			this->n = rhs.n;
		return *this;
	}
	void SetVal(int m) {this->n = m;}
	void Inc() {this->n ++;}
};

int main() {
	const Object a;
	a.n = 1;
	++a.n;
	a = object(10);
	
	a.SetVal(i);
	a.Inc();
	
	Object b{2};
	b.SetVal(20);
	b.Inc();
	b = Object {200};
	
	return 0;
}