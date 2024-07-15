#pragma once

//Header-Files
#include "Booking.h"

class HotelBooking : public Booking {

public:
    HotelBooking(string type, string id, double price, string fromDate, string toDate, long travelId, string predecessorFirst,
                 string predecessorSecond, string hotel, string town, string roomType, double hotelLat, double hotelLong) :
        Booking(type, id, price, fromDate, toDate, travelId, predecessorFirst, predecessorSecond), hotel{hotel}, town{town}, roomType{roomType},
        hotelLatitude{hotelLat},
        hotelLongitude{hotelLong}, predecessorFirst{predecessorFirst}, predecessorSecond{predecessorSecond} {}

    //Getter
    string getHotel() { return hotel; }

    string getTown() { return town; }

    string getFormattedRoomType();

    string getRoomType() { return roomType; }

    double getHotelLatitude() { return hotelLatitude; }

    double getHotelLongitue() { return hotelLongitude; }

    //Setter
    void setHotel(string inputHotel);

    void setTown(string inputTown);

    void setRoomType(string inputRoomType);

private:
    string hotel;
    string town;
    string roomType;
    double hotelLatitude;
    double hotelLongitude;
    string predecessorFirst;
    string predecessorSecond;
};
