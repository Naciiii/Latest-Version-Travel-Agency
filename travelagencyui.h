#pragma once

//Std-Libs
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <typeinfo>
#include <cxxabi.h>
#include <QListWidgetItem>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <memory>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>


//Header-Files
#include <TravelAgency.h>
#include <detailswindow.h>
#include <kundensuche.h>
#include <Coordinates.h>
#include <ConnectingPoints.h>
#include <Check.h>
#include <json.hpp>
#include <ConfigSettings.h>
#include <DisplayAlerts.h>

using namespace nlohmann;

QT_BEGIN_NAMESPACE
namespace Ui { class TravelAgencyUI; }
QT_END_NAMESPACE

class TravelAgencyUI : public QMainWindow
{
    Q_OBJECT

public:
    TravelAgencyUI(std::shared_ptr<TravelAgency> &travelAgency, QWidget *parent = nullptr);

    //Create URL for GEOJSON
    json createJsonGeoPoint(Coordinates &position);
    json createJsonGeoLineString(Coordinates &position, Coordinates &position2);

    string createCoordinate(double position);

    void reiseView(std::shared_ptr<Customer> customer);


    ~TravelAgencyUI();

private slots:
    void on_actionEinlesen_triggered();

    void on_ReisenTableWidget_itemClicked(QTableWidgetItem *item);

    void on_BuchungenTableWidget_itemClicked(QTableWidgetItem *item);

    void on_actionKunden_triggered();

    void on_actionSpeichern_triggered();

    void on_ReisenTableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_actionHinzuf_gen_triggered();

    void on_actionFehlermeldungen_triggered();

    void on_actionAlle_checken_triggered();

private:
    std::shared_ptr<TravelAgency> UpAndAway;
    std::shared_ptr<Customer> customer;
    Ui::TravelAgencyUI *ui;
    shared_ptr<Check> checker;
};

