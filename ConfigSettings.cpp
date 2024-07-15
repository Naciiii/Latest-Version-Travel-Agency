#include "ConfigSettings.h"
#include "ui_configsettings.h"

ConfigSettings::ConfigSettings(shared_ptr<TravelAgency> &travelAgency, QWidget *parent)
    : QDialog(parent)
    , UpAndAway(travelAgency)
    , ui(new Ui::ConfigSettings)
{
    ui->setupUi(this);

    bool overLappingTravel = UpAndAway->getOverLappingTravel();
    Qt::CheckState stateOverLappingTravel = overLappingTravel ? Qt::Checked : Qt::Unchecked;
    ui->overLappingTravels->setCheckState(stateOverLappingTravel);

    bool overLappingHotel = UpAndAway->getOverLappingHotel();
    Qt::CheckState stateOverLappingHotel = overLappingHotel ? Qt::Checked : Qt::Unchecked;
    ui->overLappingHotel->setCheckState(stateOverLappingHotel);

    bool overLappingRentalCar = UpAndAway->getOverLappingRentalCar();
    Qt::CheckState stateOverLappingRentalCar = overLappingRentalCar ? Qt::Checked : Qt::Unchecked;
    ui->overLappingRentalCar->setCheckState(stateOverLappingRentalCar);

    bool checkMissingHotel = UpAndAway->getCheckMissingHotel();
    Qt::CheckState stateCheckMissingHotel = checkMissingHotel ? Qt::Checked : Qt::Unchecked;
    ui->missingHotelBooking->setCheckState(stateCheckMissingHotel);
}

void ConfigSettings::on_buttonBox_accepted() {

    Qt::CheckState stateOverLappingTravel = ui->overLappingTravels->checkState();
    UpAndAway->setOverLappingTravel(stateOverLappingTravel == Qt::Checked);

    Qt::CheckState stateOverLappingHotel = ui->overLappingHotel->checkState();
    UpAndAway->setOverLappingHotel(stateOverLappingHotel == Qt::Checked);

    Qt::CheckState stateOverLappingRentalCar = ui->overLappingRentalCar->checkState();
    UpAndAway->setOverLappingRentalCar(stateOverLappingRentalCar == Qt::Checked);

    Qt::CheckState stateCheckMissingHotel = ui->missingHotelBooking->checkState();
    UpAndAway->setCheckMissingHotel(stateCheckMissingHotel == Qt::Checked);

}


ConfigSettings::~ConfigSettings() {
    delete ui;
}



