#include "Booking.h"

Booking::Booking(const string type, const string id, double price, string fromDate, string toDate, const long travelId, string predecessorFirst, string predecessorSecond) :
    type{type}, id{ id },price{ price }, fromDate{ fromDate }, toDate{ toDate }, travelId{ travelId }, predecessorFirst{ predecessorFirst }, predecessorSecond{ predecessorSecond } {}

string Booking::getId(){return id;}

string Booking::getType(){return type;}

long Booking::getTravelID(){return travelId;}

string Booking::getFromDate(){return fromDate;}

string Booking::getToDate(){return toDate;}

double Booking::getPrice(){return price;}

QDate Booking::getFromQDate(){

    QString qFromDate = QString::fromStdString(fromDate);
    QDate fromQDate = QDate::fromString(qFromDate, "yyyyMMdd");
    return fromQDate;
}

QDate Booking::getToQDate(){

    QString qToDate = QString::fromStdString(toDate);
    QDate toQDate = QDate::fromString(qToDate, "yyyyMMdd");
    return toQDate;
}

string Booking::formattedFromDate() {
    string fromYear = fromDate.substr(0, 4);
    string fromMonth = fromDate.substr(4, 2);
    string fromDay = fromDate.substr(6, 2);
    string formattedFromDate = fromDay + "." + fromMonth + "." + fromYear;
    return formattedFromDate;
}

string Booking::formattedToDate() {
    string toYear = toDate.substr(0, 4);
    string toMonth = toDate.substr(4, 2);
    string toDay = toDate.substr(6, 2);
    string formattedToDate = toDay + "." + toMonth + "." + toYear;
    return formattedToDate;

}

string Booking::formattedPrice() {
    stringstream ss_price;
    ss_price << fixed << setprecision(2) << price;
    string newPrice = ss_price.str();
    return newPrice;
}

string Booking::extraFormattedDate(string inputDate) {

    struct tm timeInfo = {};
    istringstream dateStream(inputDate);
    dateStream >> get_time(&timeInfo, "%d.%m.%Y");

    int day = timeInfo.tm_mday;
    int month = timeInfo.tm_mon + 1;
    int year = timeInfo.tm_year + 2000;

    // Zeller's Congruence algorithm
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;

    int dayOfWeek = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

    const char* dayNames[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    ostringstream formattedDate;
    formattedDate << dayNames[dayOfWeek] << ", "<< day << "." << std::put_time(&timeInfo, "%b %Y");

    return formattedDate.str();
}

void Booking::setPrice(double inputPrice)
{
    price = inputPrice;
}
void Booking::setFromDate(string inputFromDate)
{
    fromDate = inputFromDate;
}

void Booking::setToDate(string inputToDate)
{
    toDate = inputToDate;
}

bool Booking::operator<(Booking booking) {

    return (this->fromQDate < booking.getFromQDate());
}
