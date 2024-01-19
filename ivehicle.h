#pragma once
#include <iostream>


class IVehicle {
public:
    virtual bool drive(int kilometres) = 0;
    virtual void refuel() = 0;
    virtual void printStatus() const = 0;
    virtual ~IVehicle();
};
