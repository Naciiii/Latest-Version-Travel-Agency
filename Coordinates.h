#pragma once

#include <string>

class Coordinates {
public:

    Coordinates(double latitude, double longitude, string type, string nameStation) : latitude{latitude},
        longitude{longitude}, type{type},
        nameStation{nameStation} {}

    //Getter
    double getLatitude() { return latitude; }

    double getLongitude() { return longitude; }

    string getType() { return type; }

    string getNameStation() { return nameStation; }

private:
    double latitude;
    double longitude;
    string type;
    string nameStation;
};

