#include "bicycle.h"

bool Bicycle::drive(int kilometres) {
    std::cout << "Proexali " << kilometres << " km.\n";
    return true;
}

void Bicycle::refuel() {
}

void Bicycle::printStatus() const {
    std::cout << "Ya velik.\n";
}


