#pragma once
#include <vector>
#include "IVehicle.h"
#include "RoutePoint.h"

class Route {
public:
    void addPoint(const RoutePoint& point);
    void run(IVehicle* vehicle);

private:
    std::vector<RoutePoint> points;
    RoutePoint currentPoint;

    double calculateDistance(const RoutePoint& point1, const RoutePoint& point2) const;
};
