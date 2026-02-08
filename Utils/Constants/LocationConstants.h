#ifndef ROUTES_H
#define ROUTES_H
#include <string>
#include <map>

namespace Constants_Location {
    const int CAP_CITY_LC_ID = 00;

    const std::map<int, std::string> LOCATIONS = {{CAP_CITY_LC_ID,"Gran Chaos Empire"}};

    const std::string CAP_CITY_LC[] = {"Gran Chaos Empire", "Route1", "Route2", "Route3", "Route4"};
}

#endif