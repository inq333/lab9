#pragma once
#include "AbstractCar.h"

class Suv : public AbstractCar {
public:
    Suv();
    int getTotalDistance() const;
    int getFuelLevel() const;
};
