#pragma once
#include "AbstractCar.h"

class Bicycle : public IVehicle {
public:
    bool drive(int kilometres) override;
    void refuel() override;
    void printStatus() const override;
    int getTotalDistance() const;
};
