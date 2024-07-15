#include "FlightBooking.h"

string FlightBooking::getFormattedBookingClass()
{
    if (bookingClass == "Y") {

        return "Economy";

    }else if (bookingClass == "W") {

        return "Premium Economy";

    }else if (bookingClass == "J") {

        return "Business";

    }else if (bookingClass == "F") {

        return "First";
    }

    return "Nothing";
}

void FlightBooking::setFromDest(string inputFromDest) {

    fromDest = inputFromDest;

}

void FlightBooking::setToDest(string inputToDest) {

    toDest = inputToDest;

}

void FlightBooking::setAirline(string inputAirline) {

    airline = inputAirline;
}

void FlightBooking::setBookingClass(string inputBookingClass) {

    if (inputBookingClass == "Economy") {

        bookingClass = "Y";

    }else if (inputBookingClass == "Premium Economy") {

        bookingClass = "W";

    }else if (inputBookingClass == "Business") {

        bookingClass = "J";

    }else if (inputBookingClass == "First") {

        bookingClass = "F";
    }
}
