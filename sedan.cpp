#include "Sedan.h"

Sedan::Sedan() : AbstractCar(50, 8) {}

int Sedan::getTotalDistance() const {
    return totalDistance;
}

int Sedan::getFuelLevel() const {
    return fuelLevel;
}
