#pragma once

#include <string>

using namespace std;

class Layover {
public:
    Layover(string name, double latitude, double longitude)
        : name{name}, latitude{latitude}, longitude{longitude} {}

    string getName() { return name; }

    double getLatitude() { return latitude; }

    double getLongitude() { return longitude; }

private:
    string name;
    double latitude;
    double longitude;
};
