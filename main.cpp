#include "vehicle.h"
#include <iostream>
#include <stdexcept>
#include <cassert>

using namespace std;

int main() {
    try {
        Car* car = new Car();
        car->start();
        car->accelerate();
        car->brake();
        car->accelerate();
        car->gearShift(3);
        car->accelerate();
        delete car;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}