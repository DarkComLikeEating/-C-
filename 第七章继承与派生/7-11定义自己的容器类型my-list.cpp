#include <list>
#include <iostream>
#include "xr.hpp"

using namespace std;

template <class T>
class my_list : public list<T> {
public:
    my_list(T* beg, T* end) :list<T>(beg, end) {}

    const T& at(size_t pos) const {
        size_t idx{0};
        auto iter(this->begin());
        while (idx != pos && iter != this->end()) {
            ++ idx, ++ iter;
        }
        return *iter;
    }

    const T& front() const {
        return at(0);
    }
};

int main() {
    double a[] = {1, 2, 3, 4, 5, 6};
    auto n = sizeof(a) / sizeof(*a);

    my_list<double> l{a, a + n};
    for (auto i : l)
        cout << i << "\t";
    cout << endl;
    cout << l.front() << endl;

    return 0;
}