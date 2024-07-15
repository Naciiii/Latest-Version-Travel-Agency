#pragma once

#include <map>
#include <string>

using namespace std;

class Airport {
public:

    Airport(string name, string city, string isoCode) : name{name}, city{city}, isoCode{isoCode} {}

    string getName() { return name; }

private:
    string name;
    string city;
    string isoCode;
};
