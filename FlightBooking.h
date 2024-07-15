#pragma once

//Header-Files
#include "Booking.h"

class FlightBooking : public Booking {

public:

    FlightBooking(string type, string id, double price, string fromDate, string toDate, long travelId, string predecessorFirst, string predecessorSecond,
                  string fromDest, string toDest, string airline, string bookingClass, double fromDestLat,
                  double fromDestLong, double toDestLat, double toDestLong) :
        Booking(type, id, price, fromDate, toDate, travelId, predecessorFirst, predecessorSecond), fromDest{fromDest}, toDest{toDest},
        airline{airline}, bookingClass{bookingClass}, fromDestLatitude{fromDestLat},
        fromDestLongitude{fromDestLong},
        toDestLatitude{toDestLat}, toDestLongitude{toDestLong}{}

    //Getter
    string getFromDest() { return fromDest; }

    string getToDest() { return toDest; }

    string getAirline() { return airline; }

    string getFormattedBookingClass();

    string getBookingClass() { return bookingClass; }

    double getFromDestLatitude() { return fromDestLatitude; }

    double getFromDestLongitude() { return fromDestLongitude; }

    double getToDestLatitude() { return toDestLatitude; }

    double getToDestLongitude() { return toDestLongitude; }

    //Setter
    void setFromDest(string inputFromDest);

    void setToDest(string inputToDest);

    void setAirline(string inputAirline);

    void setBookingClass(string inputBookingClass);

private:
    string fromDest;
    string toDest;
    string airline;
    string bookingClass;
    double fromDestLatitude;
    double fromDestLongitude;
    double toDestLatitude;
    double toDestLongitude;
    string predecessorFirst;
    string predecessorSecond;

};
