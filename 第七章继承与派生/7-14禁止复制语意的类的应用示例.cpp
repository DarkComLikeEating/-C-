class nocopyable {
protected:
	nocopyable() noexcept {}
	~nocopyable() noexcept {}
private:
	nocopyable(const nocopyable&);
	const nocopyable& operator = (const nocopyable&);
};

class Test : private nocopyable {
public: 
	Test(int i = 0) noexcept {}
};

int main() {
	Test a{1};
//?	Test t1{a};
//?	Test t2;
//?	t2 = a;
	return 0;
}