#pragma once

//Std-Libs
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <QStringList>
#include <QMessageBox>
#include <QDate>

using namespace std;

class Booking {
public:

    Booking(string type, string id, double price, string fromDate, string toDate,
            long travelId, string predecessorFirst, string predecessorSecond);

    Booking(){}

    // Virtual Funktions
    virtual ~Booking() = default;

    //Formatted Getter
    string formattedFromDate();

    string formattedToDate();

    string formattedPrice();

    string extraFormattedDate(string inputDate);

    //Setter
    void setPrice(double inputPrice);

    void setFromDate(string inputFromDate);

    void setToDate(string inputToDate);

    //Overload
    bool operator<(Booking booking);

    //Getter
    string getId();

    string getType();

    long getTravelID();

    string getFromDate();

    string getToDate();

    double getPrice();

    QDate getFromQDate();

    QDate getToQDate();

    string getPredecessorFirst() {return predecessorFirst;}
    string getPredecessorSecond() {return predecessorSecond;}


protected:
    string type;
    string id;
    double price;
    string fromDate;
    string toDate;
    long travelId;
    QDate fromQDate;
    QDate toQDate;
    string predecessorFirst;
    string predecessorSecond;
};
