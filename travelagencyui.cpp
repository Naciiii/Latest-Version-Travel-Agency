//Header
#include "travelagencyui.h"
#include "ui_travelagencyui.h"

TravelAgencyUI::TravelAgencyUI(shared_ptr<TravelAgency> &travelAgency, QWidget *parent)
    : QMainWindow(parent),
    UpAndAway(travelAgency),
    ui(new Ui::TravelAgencyUI)
{
    checker = (make_shared<Check>(travelAgency));

    UpAndAway->setCheckPtr(checker);

    ui->setupUi(this);
    setWindowTitle("Up And Away Travels");

    ui->kundenGroupBox->setVisible(false);
    ui->reiseGroupBox->setVisible(false);

    //Ui Reihe Länge
    ui->ReisenTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->ReisenTableWidget->setColumnWidth(0, 100);
    ui->ReisenTableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->ReisenTableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);

    //Ui Reihe Länge
    ui->BuchungenTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->BuchungenTableWidget->setColumnWidth(0, 100);
    ui->BuchungenTableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->BuchungenTableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

json TravelAgencyUI::createJsonGeoPoint(Coordinates &position)
{
    json point = {
        {"type", "Feature"},
        {"geometry", {
                         {"type", "Point"},
                         {"coordinates",
                             // Exchange longi with lati
                             {position.getLongitude(), position.getLatitude()}
                         }
                     }},
        {"properties", {
                           {"Buchungstyp","Hotelbuchung"},
                           {"Hotel:", position.getNameStation()}
                       }}
    };

    return point;

}

json TravelAgencyUI::createJsonGeoLineString(Coordinates &positionFirst, Coordinates &positionSecond)
{
    json lineString = {
        {"type", "Feature"},
        {"geometry", {
                         {"type", "LineString"},
                         {"coordinates", {
                                             // Exchange longi with lati
                                             {positionFirst.getLongitude(), positionFirst.getLatitude()},
                                             {positionSecond.getLongitude(), positionSecond.getLatitude()}
                                         }}
                     }},
        {"properties", {
                           {"From:", positionFirst.getNameStation()},
                           {"To:", positionSecond.getNameStation()}
                       }}
    };

    return lineString;

}

string TravelAgencyUI::createCoordinate(double position) {
    string newPosition;
    if (position < 0) {

        return newPosition = "-" + to_string(position);
    }
    return newPosition = to_string(position);

}

void TravelAgencyUI::on_actionEinlesen_triggered()
{
    QString qFileName = QFileDialog::getOpenFileName(this, "Select File", "/Users/wsmakr/Documents/UNI/2.Sem/Prog2/Prak#5");
    string fileName = qFileName.toStdString();

    bool flag = true;

    try {

        UpAndAway->readfile(fileName);

    } catch (string &e) {

        while (flag) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Fehler beim Einlesen der Buchungen");
            msgBox.setText(QString::fromStdString(e));
            msgBox.setInformativeText("Das Einlesen der Buchungen wurde in der betroffenen Zeile gestoppt. Die vorangehenden Buchungen wurden erfolgreich angelegt.");
            msgBox.setDetailedText("Wenn Sie die Datei bereits korrigiert haben, wählen Sie 'Retry'. Wählen Sie 'Discard', um alle Buchungen zu löschen und 'Cancel', um die vorhandenen Buchungen stehenzulassen und diesen Dialog zu verlassen.");
            msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Discard | QMessageBox::Cancel );
            msgBox.setDefaultButton(QMessageBox::Retry);
            int ret = msgBox.exec();
            switch (ret) {
            case QMessageBox::Retry:
            {
                on_actionEinlesen_triggered();
                flag = false;
            }
            break;
            case QMessageBox::Discard:
                flag = false;
                break;
            case QMessageBox::Cancel:
                flag = false;
                break;
            default:
                break;
            }
        }
    }
    QString sumAll = QString::fromStdString(UpAndAway->getSumAll());
    QMessageBox::about(this,"Datei erfolgreich eingelesen",sumAll);

    ui->statusbar->showMessage("Daten wurden erfolgreich eingelesen...", 10000);
    for(auto& travel:UpAndAway->getAllTravels())
    {
        travel->createGraph();
        travel->TopologicalSort();
    }
}

void TravelAgencyUI::on_actionKunden_triggered()
{

    shared_ptr<KundenSuche> kundensuche = make_shared<KundenSuche>();

    if (kundensuche->exec() == QDialog::Accepted) {

        long customerId = kundensuche->getCustomerId();
        customer = UpAndAway->findCustomer(customerId);

        if (customer != nullptr) {

            reiseView(customer);

            ui->statusbar->showMessage("Kudendaten wurden erfolgreich gelesen", 10000);

        } else {

            ui->statusbar->showMessage("Kein Kunde mit dieser ID im System", 10000);
        }
    }
}

void TravelAgencyUI::reiseView(shared_ptr<Customer> customer)
{
    ui->ReisenTableWidget->clear();
    ui->kundenGroupBox->setVisible(true);
    ui->reiseGroupBox->setVisible(false);
    ui->idLineEdit->setText(QString::number(customer->getId()));
    ui->nameLineEdit->setText(QString::fromStdString(customer->getName()));

    vector<shared_ptr<Travel>> travelList = customer->getTravelList();

    int totalRows = travelList.size();
    ui->ReisenTableWidget->setRowCount(totalRows);

    int rowIndex = 0;
    for(auto travel : travelList) {

        QString id = QString::number(travel->getId());
        QString travelId = QString::number(travel->getId());

        shared_ptr<Booking> firstBooking = travel->findBegin();
        QString fromDate = QString::fromStdString(firstBooking->extraFormattedDate(firstBooking->formattedFromDate()));

        shared_ptr<Booking> lastBooking = travel->findEnd();
        QString toDate = QString::fromStdString(lastBooking->extraFormattedDate(lastBooking->formattedToDate()));

        ui->ReisenTableWidget->setItem(rowIndex, 0, new QTableWidgetItem(id));
        ui->ReisenTableWidget->setItem(rowIndex, 1, new QTableWidgetItem(fromDate));
        ui->ReisenTableWidget->setItem(rowIndex, 2, new QTableWidgetItem(toDate));
        ui->ReisenTableWidget->setItem(rowIndex, 3, new QTableWidgetItem(travelId));
        ui->ReisenTableWidget->setColumnHidden(3, true);
        rowIndex++;

    }
}

void TravelAgencyUI::on_ReisenTableWidget_itemClicked(QTableWidgetItem *item)
{
    int rowIn = item->row();
    QString id = ui->ReisenTableWidget->item(rowIn, 0)->text();
    long longId = id.toLongLong();

    shared_ptr<Travel> travel = UpAndAway->findTravel(longId);

    travel->sortBookings();

    //tests for graph

    //travel->createGraph();
    //travel->TopologicalSort();
    //UpAndAway->check(travel);


    vector<shared_ptr<Booking>> bookings = travel->getTravelBookings();
    QString temp;
    for(const auto& booking:travel->getSortedBooking())
    {
    for(int i=1;i<=bookings.size();i++)
    {
            if(booking==travel->getGraph()->getVertexValue(i)->getId())
            {
                temp=temp+" "+QString::number(travel->getGraph()->getEnd(i));
            }
    }
    }
    //QMessageBox::information(nullptr,"Vertex Table",temp);

    ui->reiseGroupBox->setVisible(true);
    ui->reiseIdLineEdit->setText(id);

    int totalRows = bookings.size();

    // Set the row count before the loop
    ui->BuchungenTableWidget->setRowCount(totalRows);

    int rowIndex = 0;
    while (rowIndex != totalRows) {
        shared_ptr<Booking> booking = bookings[rowIndex];

        QString iconType;
        if (booking->getType() == "RentalCar") {
            iconType = ":/icon/car.png";
        } else if (booking->getType() == "Hotel") {
            iconType = ":/icon/hotel.png";
        } else if (booking->getType() == "Flight") {
            iconType = ":/icon/plane.png";
        } else if (booking->getType() == "Train") {
            iconType = ":/icon/train.png";
        }

        QIcon icon(iconType);
        QTableWidgetItem* iconItem = new QTableWidgetItem();
        iconItem->setIcon(icon);

        // Booking* (Pointer) wird als void* gespeicher im QTableWidgetItem mit Qt::UserRole
        iconItem->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(booking.get())));

        QString fromDate = QString::fromStdString(booking->extraFormattedDate(booking->formattedFromDate()));
        QString toDate = QString::fromStdString(booking->extraFormattedDate(booking->formattedToDate()));
        QString price = QString::fromStdString(booking->formattedPrice());
        QString id = QString::fromStdString(booking->getId());

        // Set the items for each column
        ui->BuchungenTableWidget->setItem(rowIndex, 0, iconItem);
        ui->BuchungenTableWidget->setItem(rowIndex, 1, new QTableWidgetItem(fromDate));
        ui->BuchungenTableWidget->setItem(rowIndex, 2, new QTableWidgetItem(toDate));
        ui->BuchungenTableWidget->setItem(rowIndex, 3, new QTableWidgetItem(price));
        ui->BuchungenTableWidget->setItem(rowIndex, 4, new QTableWidgetItem(id));
        ui->BuchungenTableWidget->setColumnHidden(4, true);
        rowIndex++;
    }
}

void TravelAgencyUI::on_BuchungenTableWidget_itemClicked(QTableWidgetItem *item)
{
    int rowIndex = item->row();

    string id = ui->BuchungenTableWidget->item(rowIndex,4)->text().toStdString();

    shared_ptr<Booking> booking = UpAndAway->findBooking(id);

    if (booking->getType() == "Flight") {

        shared_ptr<DetailsWindowFlightRental> flightDetails = make_shared<DetailsWindowFlightRental> (UpAndAway, booking, this);
        flightDetails->exec();
    }
    else if (booking->getType() == "RentalCar"){

        shared_ptr<DetailsWindowFlightRental> rentalCarDetails = make_shared<DetailsWindowFlightRental> (UpAndAway, booking, this);
        rentalCarDetails->exec();
    }

    else if (booking->getType() == "Hotel") {

        shared_ptr<DetailsWindowFlightRental> hotelDetails = make_shared<DetailsWindowFlightRental> (UpAndAway, booking, this);
        hotelDetails->exec();
    }
    else if (booking->getType() == "Train") {

        shared_ptr<DetailsWindowFlightRental> trainDetails = make_shared<DetailsWindowFlightRental> (UpAndAway, booking, this);
        trainDetails->exec();
    }
}

void TravelAgencyUI::on_actionSpeichern_triggered()
{
    QString qFileName = QFileDialog::getOpenFileName(this, "Select File", "/Users/wsmakr/Documents/UNI/2.Sem/Prog2/Prak#4");
    string fileName = qFileName.toStdString();
    UpAndAway->setJSONFile(fileName);
}

// Reading from Travelist to call geo() functions (look up)
void TravelAgencyUI::on_ReisenTableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    int rowIndex = item->row();
    QString id = ui->ReisenTableWidget->item(rowIndex,3)->text();
    shared_ptr<Travel> travel = UpAndAway->findTravel(id.toLong());
    vector< shared_ptr<Booking>> travelList = travel->getTravelBookings();
    vector <Coordinates> coordinates;
    json geoTag;

    for (auto &booking: travelList) {

        if (booking->getType() == "Flight") {

            shared_ptr<FlightBooking> flight = dynamic_pointer_cast<FlightBooking>(booking);

            double fromDestLatitude = flight->getFromDestLatitude();
            double fromDestLongitude = flight->getFromDestLongitude();
            cout << to_string(fromDestLatitude) << endl;
            double toDestLatitude = flight->getToDestLatitude();
            double toDestLongitude = flight->getToDestLongitude();


            Coordinates tmp = Coordinates(fromDestLatitude, fromDestLongitude, "fromFlight", UpAndAway->getAirportName(QString::fromStdString(flight->getFromDest())));
            Coordinates tmpSecond = Coordinates (toDestLatitude, toDestLongitude, "toFlight", UpAndAway->getAirportName(QString::fromStdString(flight->getToDest())));

            geoTag.push_back(createJsonGeoLineString(tmp, tmpSecond));
        }
        else if (booking->getType() == "RentalCar"){

            shared_ptr<RentalCarReservation> rentalCar = dynamic_pointer_cast<RentalCarReservation>(booking);

            Coordinates tmp = Coordinates(rentalCar->getPickupLatitude(), rentalCar->getPickupLongitude(), "fromFlight", rentalCar->getPickupLocation());
            Coordinates tmpSecond = Coordinates (rentalCar->getReturnLatitude(), rentalCar->getPickupLongitude(), "toFlight", rentalCar->getReturnLocation());

            geoTag.push_back(createJsonGeoLineString(tmp, tmpSecond));

        }
        else if (booking->getType() == "Hotel") {

            shared_ptr<HotelBooking> hotel = dynamic_pointer_cast<HotelBooking>(booking);

            Coordinates tmp = Coordinates(hotel->getHotelLatitude(), hotel->getHotelLongitue(), "fromFlight", hotel->getHotel());

            geoTag.push_back(createJsonGeoPoint(tmp));

        }
        else if (booking->getType() == "Train") {

            shared_ptr<TrainTicket> train = dynamic_pointer_cast<TrainTicket>(booking);

            Coordinates tmp = Coordinates(train->getFromStationLatitude(), train->getFromStationLongitude(), "fromFlight", train->getFromDestination());
            Coordinates tmpSecond = Coordinates (train->getToStationLatitude(), train->getToStationLongitude(), "toFlight", train->getToDestination());

            vector<Layover> layovers = train->getConnectingStations();

            if (!layovers.empty()) {

                vector<Coordinates> stations;

                for(auto &tmp : layovers) {

                    stations.push_back(Coordinates(tmp.getLatitude(), tmp.getLongitude(), "ok", tmp.getName()));

                }
                auto begin = stations.begin();
                geoTag.push_back(createJsonGeoLineString(tmp, *begin));
                while (next(begin) != stations.end()) {
                    geoTag.push_back(createJsonGeoLineString(*begin, *next(begin)));
                    ++begin;
                }

                geoTag.push_back(createJsonGeoLineString(*begin, tmpSecond));

            } else {

                geoTag.push_back(createJsonGeoLineString(tmp, tmpSecond));
            }

        }
    }

    json geojson={
        {"type", "FeatureCollection"},
        {"features",geoTag}
    };
    string a="http://townsendjennings.com/geo/?geojson=";
    string b=geojson.dump();
    string c=a+b;
    QDesktopServices::openUrl(QUrl(QString::fromStdString(c)));

}

void TravelAgencyUI::on_actionHinzuf_gen_triggered() {

    shared_ptr<ConfigSettings> settings = make_shared<ConfigSettings>(UpAndAway, this);
    settings->exec();

}

void TravelAgencyUI::on_actionFehlermeldungen_triggered() {

    auto checkPtr = UpAndAway->getCheckPtr();
    shared_ptr<DisplayAlerts> displayAlerts = make_shared<DisplayAlerts>(checkPtr);
    displayAlerts->exec();

}

void TravelAgencyUI::on_actionAlle_checken_triggered()
{
    for (auto &travel: UpAndAway->getAllTravels()) {

        UpAndAway->check(travel);

    }

}

TravelAgencyUI::~TravelAgencyUI() {
    delete ui;
}



