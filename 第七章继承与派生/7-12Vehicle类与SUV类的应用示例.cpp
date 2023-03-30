#include "xr.hpp"

using namespace std;

class Vehicle {
public:
    void Usage() {
        cout << "driving...";
    }
};

class SUV : public Vehicle{
public:
    void Usage() {
        Vehicle::Usage();
        cout << "sport utinity\n";
    }
};

int main() {
    SUV bmw;
    xrv(bmw.Usage());
    xrv(bmw.Vehicle::Usage());

    return 0;
}