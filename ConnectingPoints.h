#pragma once

class ConnectionPoints {
public:

    ConnectionPoints(double first, double second) : first{first}, second{second} {}

    //Getter
    double getFirst() { return first; }

    double getSecond() { return second; }

private:
    double first;
    double second;
};
