#include "Check.h"
#include "TravelAgency.h"

bool Check::duplicate(string alert) {

    for (auto& tmp : alerts) {

        if (tmp->getText() == alert) {
            return false;
        }
    }

    return true;
}

Check::Check(shared_ptr<TravelAgency> agency) : UpAndAway{agency} {}

void Check::checkTravelsDisjunct(shared_ptr<Travel> &travel) {

    auto customer = UpAndAway->findCustomer(travel->getCustomerId());

    vector<shared_ptr<Booking>> bookings;

    string alert;

    for (auto &travel : customer->getTravelList()) {

        bookings.push_back(travel->getTravelBookings().front());
        bookings.push_back(travel->getTravelBookings().back());

    }

    int bookingsSize = static_cast<int>(bookings.size());

    for (int i{0}; i < bookingsSize;  i += 2) {

        for (int k{i + 2}; k < bookingsSize; k += 2) {

            if (bookings[i]->getFromQDate() < bookings[k]->getFromQDate() && bookings[i+1]->getToQDate() > bookings[k]->getFromQDate()) {

                alert += "Die Reisen " + to_string(bookings[i]->getTravelID());
                alert += " und " + to_string(bookings[k]->getTravelID());
                alert += " von Kunde " + to_string(customer->getId()) + " überlappen zeitlich.";

                cout << alert << endl;

                if (duplicate(alert)) {
                    alerts.push_back(make_shared<Fehler>(alert, fehlerType::TRAVELOVERLAPPING));
                }

            } else if (bookings[i]->getFromQDate() > bookings[k]->getFromQDate() && bookings[i]->getFromQDate() < bookings[k+1]->getToQDate()) {

                alert += "Die Reisen " + to_string(bookings[i]->getTravelID());
                alert += " und " + to_string(bookings[k]->getTravelID());
                alert += " von Kunde " + to_string(customer->getId()) + " überlappen zeitlich.";

                cout << alert << endl;
                if (duplicate(alert)) {
                    alerts.push_back(make_shared<Fehler>(alert, fehlerType::TRAVELOVERLAPPING));
                }
            }
        }
    }
}

void Check::checkNoMissingHotels(shared_ptr<Travel> &travel) {

    auto sortedBooking = travel->getSortedBooking();

    int bookingsSize = static_cast<int>(sortedBooking.size());

    for (int i{0}; i <= bookingsSize - 1; i++) {

        auto first = UpAndAway->findBooking(sortedBooking[i]);

        if (first->getType() != "RentalCar") {
            for (int k{i + 1}; k <= bookingsSize - 1; k++) {

                auto second = UpAndAway->findBooking(sortedBooking[k]);

                if (second->getType() != "RentalCar") {

                    if (first->getToQDate() < second->getFromQDate()) {

                        string tmp = "Für Kunde " + to_string(travel->getCustomerId()) + " und Reise " + to_string(travel->getId()) +
                                     " fehlt eine Hotelbuchung zwischen dem " + first->formattedToDate() + " und dem " +
                                     second->formattedFromDate() + ". Beteiligte Buchungen: " + first->getId() + ", " + second->getId() + ".";

                        cout << tmp << endl;

                        if (duplicate(tmp)) {
                            alerts.push_back(make_shared<Fehler>(tmp, fehlerType::MISSINGHOTEL));
                        }

                        break;
                    } else {
                        break;
                    }
                }
            }
        }
    }
}

void Check::checkNoOverlappingHotel(shared_ptr<Travel> &travel) {

    auto sortedBooking = travel->getSortedBooking();

    int bookingsSize = static_cast<int>(sortedBooking.size());

    for (int i{0}; i <= bookingsSize - 1; i++) {

        auto first = UpAndAway->findBooking(sortedBooking[i]);

        if (first->getType() == "Hotel") {
            for (int k{i + 1}; k <= bookingsSize - 1; k++) {

                auto second = UpAndAway->findBooking(sortedBooking[k]);

                if (second->getType() != "RentalCar") {
                    if (first->getToQDate() > second->getFromQDate()){

                        string tmp = "Hotelbuchung für Kunde " + to_string(travel->getCustomerId()) + " und Reise " + to_string(travel->getId()) +
                                     " überlappt mit benachbarter Buchung vom " + first->formattedToDate() + " bis zum " +
                                     second->formattedFromDate() + ". Beteiligte Buchungen: " + first->getId() + ", " + second->getId() + ".";

                        cout << tmp << endl;

                        if (duplicate(tmp)) {
                            alerts.push_back(make_shared<Fehler>(tmp, fehlerType::HOTELOVERLAPPING));
                        }

                        break;

                    } else {
                        break;
                    }
                }
            }
        }
    }
}


void Check::checkNoOverlappingRentalCars(shared_ptr<Travel> &travel) {
    auto sortedBooking = travel->getSortedBooking();

    int bookingsSize = static_cast<int>(sortedBooking.size());

    for (int i{0}; i <= bookingsSize - 1; i++) {

        auto first = UpAndAway->findBooking(sortedBooking[i]);

        if (first->getType() == "RentalCar") {
            for (int k{i + 1}; k <= bookingsSize - 1; k++) {

                auto second = UpAndAway->findBooking(sortedBooking[k]);

                if (second->getType() != "Hotel") {
                    if (first->getToQDate() > second->getFromQDate()) {

                        string tmp = "Mietwagenreservierung für Kunde " + to_string(travel->getCustomerId()) + " und Reise " + to_string(travel->getId())
                                     + " überlappt mit benachbarter Buchung vom " + first->formattedToDate() + " und dem " +
                                     second->formattedFromDate() + ". Beteiligte Buchungen: " + first->getId() + ", " + second->getId() + ".";

                        cout << tmp << endl;

                        if (duplicate(tmp)) {
                            alerts.push_back(make_shared<Fehler>(tmp, fehlerType::MISSINGHOTEL));
                        }

                        break;
                    } else {
                        break;
                    }
                }
            }
        }
    }

}

void Check::deleteAlerts() {

    alerts.clear();
}

void Check::deleteGraph(){

}
