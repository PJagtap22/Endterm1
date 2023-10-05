#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {  //created class Vehicle with speed and gear functions, initializing their return type as integers
private:
    int speed, gear;

public:  //Vehicle with features 
    Vehicle(); //Assuming we have 5 gears 
    void accelerate();
    void brake();
    void gearShift(int Gear);
    int getSpeed() const;
};

class Car : public Vehicle {
    public:
    Car();
    void start();
};

#endif 