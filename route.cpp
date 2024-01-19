#include "Route.h"
#include <cmath>

void Route::addPoint(const RoutePoint& point) {
    points.push_back(point);
}

void Route::run(IVehicle* vehicle) {
    RoutePoint currentPoint;
    for (const auto& point : points) {
        std::cout << "Driving to " << point.name << " (" << point.xKm << ", " << point.yKm << ")..." << std::endl;
        bool success = vehicle->drive(calculateDistance(currentPoint, point));
        if (!success) {
            std::cout << "Out of fuel. Refueling..." << std::endl;
            vehicle->refuel();
            success = vehicle->drive(calculateDistance(currentPoint, point));
        }
        if (success) {
            currentPoint = point;
            vehicle->printStatus();
        } else {
            std::cout << "Unable to complete the route." << std::endl;
            break;
        }
    }
}

double Route::calculateDistance(const RoutePoint& point1, const RoutePoint& point2) const {
    return std::sqrt(std::pow(point2.xKm - point1.xKm, 2) + std::pow(point2.yKm - point1.yKm, 2));
}
