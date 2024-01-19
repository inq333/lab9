#pragma once
#include "AbstractCar.h"

class Sedan : public AbstractCar {
public:
    Sedan();
    int getTotalDistance() const;
    int getFuelLevel() const;
};
