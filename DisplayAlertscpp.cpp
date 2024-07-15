#include "DisplayAlerts.h"
#include "ui_displayalerts.h"

DisplayAlerts::DisplayAlerts(shared_ptr<Check> &checkPtr, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayAlerts)
    , checkPtr(checkPtr)
{
    ui->setupUi(this);
    auto alerts = checkPtr->getAlerts();
    int totalRows = alerts.size();
    ui->tableWidget->setRowCount(totalRows);

    int rowIndex = 0;
    for(auto &alert : alerts) {


        QString iconType;
        if (alert->getFehlerType() == fehlerType::HOTELOVERLAPPING || alert->getFehlerType() == fehlerType::MISSINGHOTEL) {
            iconType = ":/icon/hotel.png";
        } else if (alert->getFehlerType() == fehlerType::RENTALCAROVERLAPPING) {
            iconType = ":/icon/car.png";
        } else if (alert->getFehlerType() == fehlerType::TRAVELOVERLAPPING) {
            iconType = ":/icon/alerts.png";
        }

        QIcon icon(iconType);
        QTableWidgetItem* iconItem = new QTableWidgetItem();
        iconItem->setIcon(icon);

        ui->tableWidget->setItem(rowIndex, 0, iconItem);
        ui->tableWidget->setItem(rowIndex, 1, new QTableWidgetItem(QString::fromStdString(alert->getText())));

        rowIndex++;

    }

    checkPtr->deleteAlerts();
}

DisplayAlerts::~DisplayAlerts()
{
    delete ui;
}
