class Grandparents {
public:
	virtual void plant() = 0;
};

class Parents : public Grandparents {
public:
	void plant() final {}
	virtual void eBussiness() {}	
};

class Youth : public Parents {
public:
	//? void plant() {}
	virtual void eBussiness() {}	
};

int main() {
	Parents p;
	p.plant();
	Youth y;
	y.plant();
	y.eBussiness();
	
	return 0;
}