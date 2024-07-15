#pragma once

#include <memory>
#include <QString>
#include <Customer.h>
#include <SortFunktor.h>
#include <QMessageBox>
#include <string>
#include <iostream>


//
#include <heap.h>


enum fehlerType{TRAVELOVERLAPPING = 1, MISSINGHOTEL, HOTELOVERLAPPING, RENTALCAROVERLAPPING};

struct Fehler{

    Fehler(string text, fehlerType fehler) :text{text}, fehler{fehler} {}

    string &getText() {return text;}

    fehlerType &getFehlerType() {return fehler;}

private:
    string text;
    fehlerType fehler = fehlerType::TRAVELOVERLAPPING;

};


class TravelAgency;

// Class is created so we can have pointer on this
using namespace std;

class Check {
public:

    Check(shared_ptr<TravelAgency> agency);

    vector<shared_ptr<Fehler>> &getAlerts(){return alerts;}

    bool duplicate(string);

    //Change to long from QMessage
    void checkTravelsDisjunct(shared_ptr<Travel> &travel);
    void checkNoMissingHotels(shared_ptr<Travel> &travel);
    void checkNoOverlappingHotel(shared_ptr<Travel> &travel);
    void checkNoOverlappingRentalCars(shared_ptr<Travel> &travel);



    void deleteAlerts();
    void deleteGraph();
private:
    shared_ptr<TravelAgency> UpAndAway;
    vector<shared_ptr<Fehler>> alerts;
};

