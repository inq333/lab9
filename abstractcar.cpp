#include "AbstractCar.h"


AbstractCar::AbstractCar(int fuelCapacity, int fuelConsumption)
    : fuelCapacity(fuelCapacity), fuelLevel(fuelCapacity), fuelConsumption(fuelConsumption), totalDistance(0) {}

bool AbstractCar::drive(int kilometres) {
    int requiredFuel = kilometres * fuelConsumption / 100;
    if (requiredFuel > fuelLevel) {
        std::cout << "Nedostatochno topliva dlya proezda " << kilometres << " km.\n";
        return false;
    } else {
        fuelLevel -= requiredFuel;
        totalDistance += kilometres;
        std::cout << "Proexali " << kilometres << " km.\n";
        return true;
    }
}

void AbstractCar::refuel() {
    fuelLevel = fuelCapacity;
    std::cout << "Toplivo uspeshno zapravleno.\n";
}

void AbstractCar::printStatus() const {
    std::cout << "Obshii probeg: " << totalDistance << " km, Ostatok topliva: " << fuelLevel << " l.\n";
}

