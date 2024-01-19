#include "Suv.h"

Suv::Suv() : AbstractCar(70, 12) {}

int Suv::getTotalDistance() const {
    return totalDistance;
}

int Suv::getFuelLevel() const {
    return fuelLevel;
}
