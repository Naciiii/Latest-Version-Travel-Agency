/********************************************************************************
** Form generated from reading UI file 'detailswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSWINDOW_H
#define UI_DETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindowFlightRental
{
public:
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QLabel *IDLabel;
    QLineEdit *ID;
    QLabel *PriceLabel;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *Price;
    QLabel *EuroSign;
    QSpacerItem *horizontalSpacer_3;
    QLabel *FromDateLabel;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *FromDate;
    QSpacerItem *horizontalSpacer;
    QLabel *ToDateLabel;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *ToDate;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *FlightTab;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *ToPlaceLabel;
    QLabel *FromPlaceLabel;
    QLabel *label_10;
    QLineEdit *fromAirportLineEdit;
    QLineEdit *AirlineClass;
    QLineEdit *From;
    QLabel *ClassLabel;
    QLineEdit *Airline;
    QLineEdit *To;
    QLineEdit *toAirportLineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *RentalcarTap;
    QGridLayout *gridLayout_3;
    QLabel *FromPlaceLabel_3;
    QLabel *label;
    QLineEdit *FromCar;
    QLabel *TypeLabel_3;
    QLineEdit *ToCar;
    QLabel *ToPlaceLabel_3;
    QLineEdit *Company;
    QLineEdit *VehicleClass;
    QSpacerItem *verticalSpacer_2;
    QWidget *HotelTab;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *Hotel;
    QLabel *label_3;
    QLineEdit *Town;
    QLineEdit *RoomType;
    QSpacerItem *verticalSpacer;
    QWidget *TrainTab;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *FromTrain;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QTimeEdit *ToTime;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QTimeEdit *FromTime;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *ToTrain;
    QLineEdit *TicketType;
    QLabel *label_11;
    QListWidget *listWidget;

    void setupUi(QDialog *DetailsWindowFlightRental)
    {
        if (DetailsWindowFlightRental->objectName().isEmpty())
            DetailsWindowFlightRental->setObjectName("DetailsWindowFlightRental");
        DetailsWindowFlightRental->resize(461, 618);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DetailsWindowFlightRental->sizePolicy().hasHeightForWidth());
        DetailsWindowFlightRental->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(DetailsWindowFlightRental);
        gridLayout_4->setObjectName("gridLayout_4");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        IDLabel = new QLabel(DetailsWindowFlightRental);
        IDLabel->setObjectName("IDLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, IDLabel);

        ID = new QLineEdit(DetailsWindowFlightRental);
        ID->setObjectName("ID");
        ID->setMinimumSize(QSize(300, 0));
        ID->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ID);

        PriceLabel = new QLabel(DetailsWindowFlightRental);
        PriceLabel->setObjectName("PriceLabel");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, PriceLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Price = new QDoubleSpinBox(DetailsWindowFlightRental);
        Price->setObjectName("Price");
        Price->setMinimumSize(QSize(95, 0));
        Price->setMaximumSize(QSize(0, 16777215));
        Price->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Price->setMaximum(9999999.990000000223517);

        horizontalLayout->addWidget(Price);

        EuroSign = new QLabel(DetailsWindowFlightRental);
        EuroSign->setObjectName("EuroSign");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EuroSign->sizePolicy().hasHeightForWidth());
        EuroSign->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(EuroSign);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        FromDateLabel = new QLabel(DetailsWindowFlightRental);
        FromDateLabel->setObjectName("FromDateLabel");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, FromDateLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        FromDate = new QDateEdit(DetailsWindowFlightRental);
        FromDate->setObjectName("FromDate");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FromDate->sizePolicy().hasHeightForWidth());
        FromDate->setSizePolicy(sizePolicy2);
        FromDate->setMinimumSize(QSize(100, 0));
        FromDate->setMaximumSize(QSize(100, 16777215));
        FromDate->setCalendarPopup(true);

        horizontalLayout_3->addWidget(FromDate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        ToDateLabel = new QLabel(DetailsWindowFlightRental);
        ToDateLabel->setObjectName("ToDateLabel");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, ToDateLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ToDate = new QDateEdit(DetailsWindowFlightRental);
        ToDate->setObjectName("ToDate");
        sizePolicy2.setHeightForWidth(ToDate->sizePolicy().hasHeightForWidth());
        ToDate->setSizePolicy(sizePolicy2);
        ToDate->setMinimumSize(QSize(100, 0));
        ToDate->setMaximumSize(QSize(100, 16777215));
        ToDate->setCalendarPopup(true);

        horizontalLayout_2->addWidget(ToDate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        gridLayout_4->addLayout(formLayout_2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DetailsWindowFlightRental);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(DetailsWindowFlightRental);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tabWidget->setTabletTracking(false);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        FlightTab = new QWidget();
        FlightTab->setObjectName("FlightTab");
        gridLayout = new QGridLayout(FlightTab);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        ToPlaceLabel = new QLabel(FlightTab);
        ToPlaceLabel->setObjectName("ToPlaceLabel");
        ToPlaceLabel->setLayoutDirection(Qt::LeftToRight);
        ToPlaceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(ToPlaceLabel, 3, 0, 1, 1);

        FromPlaceLabel = new QLabel(FlightTab);
        FromPlaceLabel->setObjectName("FromPlaceLabel");
        FromPlaceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(FromPlaceLabel, 1, 0, 1, 1);

        label_10 = new QLabel(FlightTab);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        fromAirportLineEdit = new QLineEdit(FlightTab);
        fromAirportLineEdit->setObjectName("fromAirportLineEdit");
        fromAirportLineEdit->setReadOnly(true);

        gridLayout->addWidget(fromAirportLineEdit, 2, 1, 1, 1);

        AirlineClass = new QLineEdit(FlightTab);
        AirlineClass->setObjectName("AirlineClass");
        AirlineClass->setReadOnly(true);

        gridLayout->addWidget(AirlineClass, 5, 1, 1, 1);

        From = new QLineEdit(FlightTab);
        From->setObjectName("From");
        From->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(From, 1, 1, 1, 1);

        ClassLabel = new QLabel(FlightTab);
        ClassLabel->setObjectName("ClassLabel");

        gridLayout->addWidget(ClassLabel, 5, 0, 1, 1);

        Airline = new QLineEdit(FlightTab);
        Airline->setObjectName("Airline");
        Airline->setReadOnly(true);

        gridLayout->addWidget(Airline, 0, 1, 1, 1);

        To = new QLineEdit(FlightTab);
        To->setObjectName("To");
        To->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(To, 3, 1, 1, 1);

        toAirportLineEdit = new QLineEdit(FlightTab);
        toAirportLineEdit->setObjectName("toAirportLineEdit");
        toAirportLineEdit->setReadOnly(true);

        gridLayout->addWidget(toAirportLineEdit, 4, 1, 1, 1);

        label_12 = new QLabel(FlightTab);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        label_13 = new QLabel(FlightTab);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        tabWidget->addTab(FlightTab, QString());
        RentalcarTap = new QWidget();
        RentalcarTap->setObjectName("RentalcarTap");
        gridLayout_3 = new QGridLayout(RentalcarTap);
        gridLayout_3->setObjectName("gridLayout_3");
        FromPlaceLabel_3 = new QLabel(RentalcarTap);
        FromPlaceLabel_3->setObjectName("FromPlaceLabel_3");
        FromPlaceLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(FromPlaceLabel_3, 0, 1, 1, 1);

        label = new QLabel(RentalcarTap);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 3, 1, 1, 1);

        FromCar = new QLineEdit(RentalcarTap);
        FromCar->setObjectName("FromCar");

        gridLayout_3->addWidget(FromCar, 0, 3, 1, 1);

        TypeLabel_3 = new QLabel(RentalcarTap);
        TypeLabel_3->setObjectName("TypeLabel_3");

        gridLayout_3->addWidget(TypeLabel_3, 2, 1, 1, 1);

        ToCar = new QLineEdit(RentalcarTap);
        ToCar->setObjectName("ToCar");

        gridLayout_3->addWidget(ToCar, 1, 3, 1, 1);

        ToPlaceLabel_3 = new QLabel(RentalcarTap);
        ToPlaceLabel_3->setObjectName("ToPlaceLabel_3");
        ToPlaceLabel_3->setLayoutDirection(Qt::LeftToRight);
        ToPlaceLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(ToPlaceLabel_3, 1, 1, 1, 1);

        Company = new QLineEdit(RentalcarTap);
        Company->setObjectName("Company");
        Company->setReadOnly(true);

        gridLayout_3->addWidget(Company, 2, 3, 1, 1);

        VehicleClass = new QLineEdit(RentalcarTap);
        VehicleClass->setObjectName("VehicleClass");

        gridLayout_3->addWidget(VehicleClass, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 3, 1, 1);

        tabWidget->addTab(RentalcarTap, QString());
        HotelTab = new QWidget();
        HotelTab->setObjectName("HotelTab");
        gridLayout_2 = new QGridLayout(HotelTab);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(HotelTab);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(HotelTab);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 2, 0, 1, 2);

        Hotel = new QLineEdit(HotelTab);
        Hotel->setObjectName("Hotel");

        gridLayout_2->addWidget(Hotel, 0, 2, 1, 1);

        label_3 = new QLabel(HotelTab);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        Town = new QLineEdit(HotelTab);
        Town->setObjectName("Town");

        gridLayout_2->addWidget(Town, 1, 2, 1, 1);

        RoomType = new QLineEdit(HotelTab);
        RoomType->setObjectName("RoomType");

        gridLayout_2->addWidget(RoomType, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 218, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 2);

        tabWidget->addTab(HotelTab, QString());
        TrainTab = new QWidget();
        TrainTab->setObjectName("TrainTab");
        gridLayout_6 = new QGridLayout(TrainTab);
        gridLayout_6->setObjectName("gridLayout_6");
        label_5 = new QLabel(TrainTab);
        label_5->setObjectName("label_5");

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        label_9 = new QLabel(TrainTab);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(label_9, 5, 0, 1, 1);

        FromTrain = new QLineEdit(TrainTab);
        FromTrain->setObjectName("FromTrain");

        gridLayout_6->addWidget(FromTrain, 0, 1, 1, 1);

        label_6 = new QLabel(TrainTab);
        label_6->setObjectName("label_6");

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ToTime = new QTimeEdit(TrainTab);
        ToTime->setObjectName("ToTime");

        horizontalLayout_5->addWidget(ToTime);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout_6->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        FromTime = new QTimeEdit(TrainTab);
        FromTime->setObjectName("FromTime");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(FromTime->sizePolicy().hasHeightForWidth());
        FromTime->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(FromTime);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        label_8 = new QLabel(TrainTab);
        label_8->setObjectName("label_8");

        gridLayout_6->addWidget(label_8, 3, 0, 1, 1);

        label_7 = new QLabel(TrainTab);
        label_7->setObjectName("label_7");

        gridLayout_6->addWidget(label_7, 2, 0, 1, 1);

        ToTrain = new QLineEdit(TrainTab);
        ToTrain->setObjectName("ToTrain");

        gridLayout_6->addWidget(ToTrain, 2, 1, 1, 1);

        TicketType = new QLineEdit(TrainTab);
        TicketType->setObjectName("TicketType");

        gridLayout_6->addWidget(TicketType, 4, 1, 1, 1);

        label_11 = new QLabel(TrainTab);
        label_11->setObjectName("label_11");

        gridLayout_6->addWidget(label_11, 4, 0, 1, 1);

        listWidget = new QListWidget(TrainTab);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        listWidget->setSortingEnabled(false);

        gridLayout_6->addWidget(listWidget, 5, 1, 1, 1);

        tabWidget->addTab(TrainTab, QString());

        gridLayout_4->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(DetailsWindowFlightRental);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DetailsWindowFlightRental, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DetailsWindowFlightRental, qOverload<>(&QDialog::reject));
        QObject::connect(Airline, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(Price, &QDoubleSpinBox::valueChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(FromDate, &QDateEdit::timeChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(ToDate, &QDateEdit::timeChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(Airline, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(From, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(To, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(AirlineClass, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(FromCar, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(ToCar, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(Company, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(VehicleClass, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(Hotel, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(Town, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(RoomType, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(FromTrain, &QLineEdit::textChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(FromTime, &QTimeEdit::timeChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(ToTrain, &QLineEdit::textEdited, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(ToTime, &QTimeEdit::timeChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(FromDate, &QDateEdit::dateChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));
        QObject::connect(ToDate, &QDateEdit::dateChanged, buttonBox, qOverload<>(&QDialogButtonBox::show));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DetailsWindowFlightRental);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindowFlightRental)
    {
        DetailsWindowFlightRental->setWindowTitle(QCoreApplication::translate("DetailsWindowFlightRental", "Dialog", nullptr));
        IDLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "ID:", nullptr));
        PriceLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Price:", nullptr));
        EuroSign->setText(QCoreApplication::translate("DetailsWindowFlightRental", "\342\202\254", nullptr));
        FromDateLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Date From:", nullptr));
        FromDate->setDisplayFormat(QCoreApplication::translate("DetailsWindowFlightRental", "dd.MM.yyyy", nullptr));
        ToDateLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Date To:", nullptr));
        ToDate->setDisplayFormat(QCoreApplication::translate("DetailsWindowFlightRental", "dd.MM.yyyy", nullptr));
        ToPlaceLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "To:", nullptr));
        FromPlaceLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "From:", nullptr));
        label_10->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Airline:", nullptr));
        ClassLabel->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Class:", nullptr));
        label_12->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Airport:", nullptr));
        label_13->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Airport:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FlightTab), QCoreApplication::translate("DetailsWindowFlightRental", "Flight", nullptr));
        FromPlaceLabel_3->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Pickup Location:", nullptr));
        label->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Vehicle Class:", nullptr));
        TypeLabel_3->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Company:", nullptr));
        ToPlaceLabel_3->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Return Location:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RentalcarTap), QCoreApplication::translate("DetailsWindowFlightRental", "Rental Car", nullptr));
        label_2->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Hotel:", nullptr));
        label_4->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Room Type:", nullptr));
        label_3->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Town:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(HotelTab), QCoreApplication::translate("DetailsWindowFlightRental", "Hotel", nullptr));
        label_5->setText(QCoreApplication::translate("DetailsWindowFlightRental", "From:", nullptr));
        label_9->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Layovers:", nullptr));
        label_6->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Departure:", nullptr));
        label_8->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Arrival:", nullptr));
        label_7->setText(QCoreApplication::translate("DetailsWindowFlightRental", "To:", nullptr));
        label_11->setText(QCoreApplication::translate("DetailsWindowFlightRental", "Ticket Type:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TrainTab), QCoreApplication::translate("DetailsWindowFlightRental", "Train", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindowFlightRental: public Ui_DetailsWindowFlightRental {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSWINDOW_H
