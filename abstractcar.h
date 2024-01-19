#pragma once
#include "IVehicle.h"

class AbstractCar : public IVehicle {
public:
    AbstractCar(int fuelCapacity, int fuelConsumption);
    bool drive(int kilometres) override;
    void refuel() override;
    void printStatus() const override;
    int fuelCapacity;
    int fuelLevel;
    int fuelConsumption;
    int totalDistance;
};
