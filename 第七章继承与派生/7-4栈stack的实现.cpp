#include <deque>

template < class T, class Container = std::deque<T> >
class stack {
private:
	Container c;
public:
	bool empty() const {
		return (c.empty());
	}
	size_t size() const {
		return (c.size());
	}
	T& top() {
		return (c.back());
	}
	const T& yop() const {
		return (c.back());
	}
	void push(const T& val) {
		c.push_back(val);
	}
	void pop() {
		c.pop_back();
	}
};

int main() {
	return 0;
}