#pragma once
#include "AbstractCar.h"

class Bus : public AbstractCar {
public:
    Bus();
    int getTotalDistance() const;
    int getFuelLevel() const;
};
