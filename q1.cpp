#include <iostream>
#include <cassert> // library function for assertion

using namespace std;

class Vehicle
{ // created class Vehicle with speed and gear functions, initializing their return type as integers
private:
    int speed, gear;

public:                              // Vehicle with features
    Vehicle() : speed(0), gear(1) {} // Assuming we have 5 gears

    // creating member functions (accelerate, break, gear-shift)
    void accelerate()
    { // increases speed by 20 units everytime a car is accelerated
        speed += 20;
        cout << "Accelerating Speed: " << speed << " km/h" << endl;
    }

    void brake()
    { // checks current speed (>0) if yes, it decreses it by 20 units
        if (speed > 0)
        {
            speed -= 20;
            cout << "Braking Speed: " << speed << " km/h" << endl;
        }
        else
        {
            cout << "The speed of the vehicle is zero." << endl;
        }
    }

    void gearShift(int Gear)
    { // checks if gera is btwn 1-6 if yes, updates it with new gear value (Gear).
        if (Gear >= 1 && Gear <= 6)
        {
            gear = Gear;
            cout << "Changed gear to " << gear << endl;
        }
        else
        {
            throw invalid_argument("Invalid gear selected"); // throw- Error handling mechanism used
        }
    }

    int getSpeed() const
    { // getter method -> returns the current speed, const- constant
        return speed;
    }
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car is starting..." << endl;
    }
};

int main()
{
    try
    {
        Car *car = new Car(); // uisng pointers to dynamically allocate memory of Car
        car->start();
        car->accelerate();
        car->brake();
        car->accelerate();
        car->gearShift(3); // this is variable
        car->accelerate();

        delete car; // Deallocating memory
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    } // error handling mechanism

    return 0;
}
