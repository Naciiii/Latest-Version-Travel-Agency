#include "detailswindow.h"
#include "ui_detailswindow.h"

DetailsWindowFlightRental::DetailsWindowFlightRental(shared_ptr<TravelAgency> travelAgency, shared_ptr<Booking> booking, QWidget *parent) :
    QDialog(parent),
    UpAndAway(travelAgency),
    booking(booking),
    ui(new Ui::DetailsWindowFlightRental)
{
    ui->setupUi(this);

    //Icons von rc
    QIcon newIconFlight(":/icon/plane.png");
    QIcon newIconRentalCar(":/icon/car.png");
    QIcon newIconHotel(":/icon/hotel.png");
    QIcon newIconTrain(":/icon/train.png");

    ui->tabWidget->setTabIcon(0, newIconFlight);
    ui->tabWidget->setTabIcon(1, newIconRentalCar);
    ui->tabWidget->setTabIcon(2, newIconHotel);
    ui->tabWidget->setTabIcon(3, newIconTrain);

    if (booking->getType() == "Flight") {

        ui->tabWidget->setTabEnabled(0, true);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, false);
        setFlight();

    }else if (booking->getType() == "RentalCar") {

        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, true);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, false);
        setRentalCar();

    }else if (booking->getType() == "Hotel") {

        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, true);
        ui->tabWidget->setTabEnabled(3, false);
        setHotel();

    }else if (booking->getType() == "Train") {

        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, true);
        setTrain();
    }
}


void DetailsWindowFlightRental::setFlight() {

    shared_ptr<FlightBooking> fBooking = dynamic_pointer_cast<FlightBooking>(booking);

    setWindowTitle("Flight");
    ui->ID->setText(QString::fromStdString(fBooking->getId()));

    ui->Airline->setText(QString::fromStdString(fBooking->getAirline()));
    ui->From->setText(QString::fromStdString(fBooking->getFromDest()));

    QString fromDestAirport = QString::fromStdString(UpAndAway->getAirportName(QString::fromStdString(fBooking->getFromDest())));
    QString toDestAirport = QString::fromStdString(UpAndAway->getAirportName(QString::fromStdString(fBooking->getToDest())));

    ui->fromAirportLineEdit->setText(fromDestAirport);
    ui->toAirportLineEdit->setText(toDestAirport);

    ui->To->setText(QString::fromStdString(fBooking->getToDest()));

    double price = stod(fBooking->formattedPrice());
    ui->Price->setValue(price);

    QDate fromDate = QDate::fromString(QString::fromStdString(fBooking->formattedFromDate()), "dd.MM.yyyy");
    QDate toDate = QDate::fromString(QString::fromStdString(fBooking->formattedToDate()), "dd.MM.yyyy");
    ui->FromDate->setDate(fromDate);
    ui->ToDate->setDate(toDate);
    ui->AirlineClass->setText(QString::fromStdString(fBooking->getFormattedBookingClass()));

    ui->buttonBox->setHidden(true);

}

void DetailsWindowFlightRental::setRentalCar() {

    shared_ptr<RentalCarReservation> rBooking = dynamic_pointer_cast<RentalCarReservation>(booking);

    setWindowTitle("Rental Car");
    ui->ID->setText(QString::fromStdString(rBooking->getId()));

    ui->FromCar->setText(QString::fromStdString(rBooking->getPickupLocation()));
    ui->ToCar->setText(QString::fromStdString(rBooking->getReturnLocation()));
    ui->Company->setText(QString::fromStdString(rBooking->getCompany()));

    double price = stod(rBooking->formattedPrice());
    ui->Price->setValue(price);

    QDate fromDate = QDate::fromString(QString::fromStdString(rBooking->formattedFromDate()), "dd.MM.yyyy");
    QDate toDate = QDate::fromString(QString::fromStdString(rBooking->formattedToDate()), "dd.MM.yyyy");
    ui->FromDate->setDate(fromDate);
    ui->ToDate->setDate(toDate);
    ui->VehicleClass->setText(QString::fromStdString(rBooking->getVehicleClass()));

    ui->buttonBox->setHidden(true);
}

void DetailsWindowFlightRental::setHotel() {

    shared_ptr<HotelBooking> hBooking = dynamic_pointer_cast<HotelBooking>(booking);

    setWindowTitle("Hotel");
    ui->ID->setText(QString::fromStdString(hBooking->getId()));

    ui->Hotel->setText(QString::fromStdString(hBooking->getHotel()));
    ui->Town->setText(QString::fromStdString(hBooking->getTown()));

    double price = stod(hBooking->formattedPrice());
    ui->Price->setValue(price);

    QDate fromDate = QDate::fromString(QString::fromStdString(hBooking->formattedFromDate()), "dd.MM.yyyy");
    QDate toDate = QDate::fromString(QString::fromStdString(hBooking->formattedToDate()), "dd.MM.yyyy");
    ui->FromDate->setDate(fromDate);
    ui->ToDate->setDate(toDate);
    ui->RoomType->setText(QString::fromStdString(hBooking->getFormattedRoomType()));

    ui->buttonBox->setHidden(true);
}

void DetailsWindowFlightRental::setTrain() {

    shared_ptr<TrainTicket> tBooking = dynamic_pointer_cast<TrainTicket>(booking);

    setWindowTitle("Train");
    ui->ID->setText(QString::fromStdString(tBooking->getId()));

    ui->FromTrain->setText(QString::fromStdString(tBooking->getFromDestination()));
    ui->ToTrain->setText(QString::fromStdString(tBooking->getToDestination()));

    QTime fromTime = QTime::fromString(QString::fromStdString(tBooking->getDepartureTime()), "HH:mm");
    QTime toTime = QTime::fromString(QString::fromStdString(tBooking->getArrivalTime()), "HH:mm");
    ui->FromTime->setTime(fromTime);
    ui->ToTime->setTime(toTime);

    double price = stod(tBooking->formattedPrice());
    ui->Price->setValue(price);

    QDate fromDate = QDate::fromString(QString::fromStdString(tBooking->formattedFromDate()), "dd.MM.yyyy");
    QDate toDate = QDate::fromString(QString::fromStdString(tBooking->formattedToDate()), "dd.MM.yyyy");
    ui->FromDate->setDate(fromDate);
    ui->ToDate->setDate(toDate);

    QStringList layovers = tBooking->getLayovers();
    ui->listWidget->addItems(layovers);

    ui->TicketType->setText(QString::fromStdString(tBooking->getBookingClass()));

    ui->buttonBox->setHidden(true);

}

void DetailsWindowFlightRental::saveFlight() {

    // Since booking* is based (badum tsss)
    shared_ptr<FlightBooking> fBooking = dynamic_pointer_cast<FlightBooking>(booking);

    fBooking->setPrice(ui->Price->value());
    fBooking->setFromDate(ui->FromDate->date().toString("yyyyMMdd").toStdString());
    fBooking->setToDate(ui->ToDate->date().toString("yyyyMMdd").toStdString());
    fBooking->setAirline(ui->Airline->text().toStdString());
    fBooking->setFromDest(ui->From->text().toStdString());
    fBooking->setToDest(ui->To->text().toStdString());
    fBooking->setToDest(ui->To->text().toStdString());
    fBooking->setBookingClass(ui->AirlineClass->text().toStdString());

    auto travel = UpAndAway->findTravel(fBooking->getTravelID());
    UpAndAway->check(travel);
}

void DetailsWindowFlightRental::saveRentalCar() {

    shared_ptr<RentalCarReservation> rBooking = dynamic_pointer_cast<RentalCarReservation>(booking);

    rBooking->setPrice(ui->Price->value());
    rBooking->setFromDate(ui->FromDate->date().toString("yyyyMMdd").toStdString());
    rBooking->setToDate(ui->ToDate->date().toString("yyyyMMdd").toStdString());
    rBooking->setCompany(ui->Company->text().toStdString());
    rBooking->setPickupLocation(ui->FromCar->text().toStdString());
    rBooking->setReturnLocation(ui->ToCar->text().toStdString());
    rBooking->setVehicleClass(ui->VehicleClass->text().toStdString());

    auto travel = UpAndAway->findTravel(rBooking->getTravelID());
    UpAndAway->check(travel);
}

void DetailsWindowFlightRental::saveHotel() {

    shared_ptr<HotelBooking> hBooking = dynamic_pointer_cast<HotelBooking>(booking);

    hBooking->setPrice(ui->Price->value());
    hBooking->setFromDate(ui->FromDate->date().toString("yyyyMMdd").toStdString());
    hBooking->setToDate(ui->ToDate->date().toString("yyyyMMdd").toStdString());
    hBooking->setHotel(ui->Hotel->text().toStdString());
    hBooking->setTown(ui->Town->text().toStdString());
    hBooking->setRoomType(ui->RoomType->text().toStdString());

    auto travel = UpAndAway->findTravel(hBooking->getTravelID());
    UpAndAway->check(travel);
}

void DetailsWindowFlightRental::saveTrain() {

    shared_ptr<TrainTicket> tBooking = dynamic_pointer_cast<TrainTicket>(booking);

    tBooking->setPrice(ui->Price->value());
    tBooking->setFromDate(ui->FromDate->date().toString("yyyyMMdd").toStdString());
    tBooking->setToDate(ui->ToDate->date().toString("yyyyMMdd").toStdString());
    tBooking->setFromDestination(ui->FromTrain->text().toStdString());
    tBooking->setDepartureTime(ui->FromTime->time().toString("HH:mm").toStdString());
    tBooking->setToDestination(ui->ToTrain->text().toStdString());
    tBooking->setArrivalTime(ui->ToTime->time().toString("HH:mm").toStdString());
    tBooking->setBookingClass(ui->TicketType->text().toStdString());

    auto travel = UpAndAway->findTravel(tBooking->getTravelID());
    UpAndAway->check(travel);
}

bool DetailsWindowFlightRental::checkFlight() {

    if (ui->Price->value() <= 0 ||
        ui->FromDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->ToDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->Airline->text().toStdString().empty() ||
        ui->From->text().toStdString().empty() ||
        ui->To->text().toStdString().empty() ||
        ui->AirlineClass->text().toStdString().empty()) {
        return false;
    }

    return true;
}

bool DetailsWindowFlightRental::checkRentalCar() {

    if (ui->Price->value() <= 0 ||
        ui->FromDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->ToDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->Company->text().toStdString().empty() ||
        ui->FromCar->text().toStdString().empty() ||
        ui->ToCar->text().toStdString().empty() ||
        ui->VehicleClass->text().toStdString().empty()) {
        return false;
    }
    return true;
}

bool DetailsWindowFlightRental::checkHotel() {

    if (ui->Price->value() <= 0 ||
        ui->FromDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->ToDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->Hotel->text().toStdString().empty() ||
        ui->Town->text().toStdString().empty() ||
        ui->RoomType->text().toStdString().empty()) {
        return false;
    }
    return true;
}

bool DetailsWindowFlightRental::checkTrain() {

    if (ui->Price->value() <= 0 ||
        ui->FromDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->ToDate->date().toString("yyyyMMdd").toStdString().empty() ||
        ui->FromTrain->text().toStdString().empty() ||
        ui->FromTime->time().toString("HH:mm").toStdString().empty() ||
        ui->ToTrain->text().toStdString().empty() ||
        ui->ToTime->time().toString("HH:mm").toStdString().empty() ||
        ui->TicketType->text().toStdString().empty()) {
        return false;
    }
    return true;
}

void DetailsWindowFlightRental::on_buttonBox_accepted()
{
    QString currentTabText = ui->tabWidget->tabText(ui->tabWidget->currentIndex());

    if (currentTabText == "Flight") {
        if(checkFlight()) {
            saveFlight();
        } else {
            QMessageBox::information(this, "Fehler", "Buchung wurde nicht gespeichert, Sie haben ein Feld leer gelassen");
        }
    } else if (currentTabText == "Rental Car") {
        if(checkRentalCar()) {
            saveRentalCar();
        } else{
            QMessageBox::information(this, "Fehler", "Buchung wurde nicht gespeichert, Sie haben ein Feld leer gelassen");
        }
    } else if (currentTabText == "Hotel") {
        if(checkHotel()) {
            saveHotel();
        } else {
            QMessageBox::information(this, "Fehler", "Buchung wurde nicht gespeichert, Sie haben ein Feld leer gelassen");
        }
    } else if (currentTabText == "Train") {
        if (checkTrain()) {
            saveTrain();
        } else {
            QMessageBox::information(this, "Fehler", "Buchung wurde nicht gespeichert, Sie haben ein Feld leer gelassen");
        }
    }
}

DetailsWindowFlightRental::~DetailsWindowFlightRental() {
    delete ui;
}


void DetailsWindowFlightRental::on_From_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking> fBooking = dynamic_pointer_cast<FlightBooking>(booking);
    QString fromDestAirport = QString::fromStdString(UpAndAway->getAirportName(arg1));

    if (fromDestAirport == "Invalid Iata-Code") {
        this->ui->fromAirportLineEdit->setStyleSheet("color: red;");
        ui->fromAirportLineEdit->setText(fromDestAirport);
    } else {
        this->ui->fromAirportLineEdit->setStyleSheet("color: white;");
        ui->fromAirportLineEdit->setText(fromDestAirport);
    }
}


void DetailsWindowFlightRental::on_To_textChanged(const QString &arg1)
{
    shared_ptr<FlightBooking> fBooking = dynamic_pointer_cast<FlightBooking>(booking);
    QString toDestAirport = QString::fromStdString(UpAndAway->getAirportName(arg1));

    if (toDestAirport == "Invalid Iata-Code"  )    {
        this->ui->toAirportLineEdit->setStyleSheet("color: red;");
        ui->toAirportLineEdit->setText(toDestAirport);
    } else {
        this->ui->fromAirportLineEdit->setStyleSheet("color: white;");
        ui->toAirportLineEdit->setText(toDestAirport);
    }
}

