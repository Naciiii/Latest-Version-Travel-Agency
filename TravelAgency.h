#pragma once

//Std-Lib
#include <string>
#include <fstream>
#include <QString>
#include <QStringList>
#include <map>
#include <QFileDialog>
#include <memory>
#include <vector>
#include <iomanip>

//Header-Files
#include "json.hpp"
#include "Booking.h"
#include "FlightBooking.h"
#include "HotelBooking.h"
#include "RentalCarReservation.h"
#include "TrainTicket.h"
#include "Customer.h"
#include "Travel.h"
#include "Airport.h"


//Class is created so we can have pointer on this
class Check;

using namespace std;

class TravelAgency : public enable_shared_from_this<TravelAgency>{
public:

    void setJSONFile(string fileName);
    void readIataCode();
    void readfile(string fileName);

    shared_ptr<Booking> findBooking(const string id); // Changed from long to String
    shared_ptr<Travel> findTravel(const long id);
    shared_ptr<Customer> findCustomer(const long id);

    //Getter
    vector<shared_ptr<Booking>> &getBookings();
    vector<shared_ptr<Travel>> &getTravels();
    int getCountAll();
    string getSumAll();
    string getAirportName(QString iataCode);

    bool getCheckMissingHotel(){ return checkMissingHotel; }
    bool getOverLappingTravel(){ return overLappingTravel; }
    bool getOverLappingHotel(){ return overLappingHotel; }
    bool getOverLappingRentalCar(){ return overLappingRentalCar; }

    //Setter
    void setCheckMissingHotel(bool state){ checkMissingHotel = state; }
    void setOverLappingTravel(bool state){ overLappingTravel = state; }
    void setOverLappingHotel(bool state){ overLappingHotel = state; }
    void setOverLappingRentalCar(bool state){ overLappingRentalCar = state; }

    //Adder
    bool addNewRentalCarBooking(const nlohmann::basic_json<> rentalCarBooking);
    bool addNewHotelBooking(const nlohmann::basic_json<> hotelBooking);
    bool addNewFlightBooking(const nlohmann::basic_json<> flightBooking);
    bool addNewTrainBooking(const nlohmann::basic_json<> trainbooking);

    //Check
    void setCheckPtr(shared_ptr<Check> tmp) { checkPtr = tmp;}
    void check(shared_ptr<Travel> &travel) const;

    shared_ptr<Check> getCheckPtr() const;

    vector<shared_ptr<Travel> > getAllTravels() const;

private:
    map<string, shared_ptr<Airport>> airports;
    vector<shared_ptr<Booking>> allBookings;
    vector<shared_ptr<Travel>> allTravels;
    vector<shared_ptr<Customer>> allCustomers;
    double sumCar{}, sumHotel{}, sumFlight{}, sumTrain{};
    int countCar{}, countHotel{}, countFlight{}, countTrain{};
    shared_ptr<Check> checkPtr;
    bool checkMissingHotel = true;
    bool overLappingTravel = true;
    bool overLappingHotel = true;
    bool overLappingRentalCar = true;
};

