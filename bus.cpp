#include "bus.h"

Bus::Bus() : AbstractCar(150, 15) {}

int Bus::getTotalDistance() const {
    return totalDistance;
}

int Bus::getFuelLevel() const {
    return fuelLevel;
}
