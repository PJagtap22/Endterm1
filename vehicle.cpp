#include "vehicle.h"
#include <iostream>
#include <stdexcept>
//#include <cassert>
using namespace std;

Vehicle::Vehicle() : speed(0), gear(1) {} //Assuming we have 5 gears 

    //creating member functions (accelerate, break, gear-shift)    
    void Vehicle::accelerate() {
        speed += 20;
        cout << "Accelerating Speed: " << speed << " km/h" << endl;
    }

    void Vehicle::brake() {
        if (speed > 0) {
            speed -= 20;
            cout << "Braking Speed: " << speed << " km/h" << endl;
        } else {
            cout << "The speed of the vehicle is zero." << endl;
        }
    }

    void Vehicle::gearShift(int Gear) {
        if (Gear >= 1 && Gear <= 6) {
            gear = Gear;
            cout << "Changed gear to " << gear << endl;
        } else {
            throw invalid_argument("Invalid gear selected"); // throw- Error handling mechanism used
        }
    }

    int Vehicle::getSpeed() const {
        return speed;
    }

    void Car::start() {
        cout << "Car is starting..." << endl;
    }

