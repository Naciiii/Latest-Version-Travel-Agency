#pragma once

//Std-Libs
#include <QDialog>
#include <QStringList>
#include <QStringListModel>
#include <memory>

//Header-Files
#include <FlightBooking.h>
#include <RentalCarReservation.h>
#include <HotelBooking.h>
#include <TrainTicket.h>
#include <TravelAgency.h>

namespace Ui {
class DetailsWindowFlightRental;
}

class DetailsWindowFlightRental : public QDialog {
    Q_OBJECT

public:

    explicit DetailsWindowFlightRental(shared_ptr <TravelAgency> travelAgeny, shared_ptr <Booking> booking,
                                       QWidget *parent = nullptr);

    //Show in UI
    void setFlight();

    void setRentalCar();

    void setHotel();

    void setTrain();

    // Save in Vector
    void saveFlight();

    void saveRentalCar();

    void saveHotel();

    void saveTrain();

    // Check if any element is empty
    bool checkFlight();

    bool checkRentalCar();

    bool checkHotel();

    bool checkTrain();


    ~DetailsWindowFlightRental();

    private
        slots:

    void on_buttonBox_accepted();

        void on_From_textChanged(const QString &arg1);

    void on_To_textChanged(const QString &arg1);

private:
    Ui::DetailsWindowFlightRental *ui;
    shared_ptr <Booking> booking;
    shared_ptr <TravelAgency> UpAndAway;
};


