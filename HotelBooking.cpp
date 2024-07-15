#include "HotelBooking.h"

string HotelBooking::getFormattedRoomType() {

    if (roomType == "EZ") {

        return "Einzelzimmer";

    }else if (roomType == "DZ") {

        return "Doppelzimmer";

    }else if (roomType == "SU") {

        return "Suite";

    }else if (roomType == "AP") {

        return "Appartment";
    }

}

void HotelBooking::setHotel(string inputHotel) {

    hotel = inputHotel;

}

void HotelBooking::setTown(string inputTown) {

    town = inputTown;

}

void HotelBooking::setRoomType(string inputRoomType) {

    if (roomType == "Einzelzimmer") {

        roomType =  "EZ";

    }else if (roomType == "Doppelzimmer") {

        roomType = "DZ";

    }else if (roomType == "Suite") {

        roomType = "SU";

    }else if (roomType == "Appartment") {

        roomType =  "AP";
    }

}
