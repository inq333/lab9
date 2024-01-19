#include <iostream>
#include "objects.h"

int main() {
    Route route;
    route.addPoint({0, 0, "Point A"});
    route.addPoint({10, 5, "Point B"});
    route.addPoint({20, 10, "Point C"});
    Sedan sedan;
    Suv suv;
    Bus bus;
    Bicycle bicycle;
//    route.run(&sedan);
//    route.run(&suv);
//    route.run(&bicycle);
//    route.run(&bus);
    return 0;
}
