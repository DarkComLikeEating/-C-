class Base {
public:
	virtual void f0();
	virtual void f1() const;
	virtual void f2(float);
	virtual void f3() &;
	void f4();
};

class Derived : public Base {
public:
	void f0() override;
	virtual void f1() override;
	virtual void f2(double) override;
	virtual void f3() && override;
	void f4() const override;
};