QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++23

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Booking.cpp \
    Check.cpp \
    ConfigSettings.cpp \
    Customer.cpp \
    DisplayAlertscpp.cpp \
    FlightBooking.cpp \
    HotelBooking.cpp \
    RentalCarReservation.cpp \
    SortFunktor.cpp \
    TrainTicket.cpp \
    Travel.cpp \
    TravelAgency.cpp \
    algorithmen.cpp \
    detailswindow.cpp \
    heap.cpp \
    kundensuche.cpp \
    main.cpp \
    mainwindow.cpp \
    travelagencyui.cpp

HEADERS += \
    Airport.h \
    Booking.h \
    Check.h \
    ConfigSettings.h \
    ConnectingPoints.h \
    Coordinates.h \
    Customer.h \
    DisplayAlerts.h \
    FlightBooking.h \
    HotelBooking.h \
    Layover.h \
    RentalCarReservation.h \
    SortFunktor.h \
    TrainTicket.h \
    Travel.h \
    TravelAgency.h \
    detailswindow.h \
    digraph.h \
    heap.h \
    json.hpp \
    kundensuche.h \
    mainwindow.h \
    travelagencyui.h

FORMS += \
    configsettings.ui \
    detailswindow.ui \
    displayalerts.ui \
    kundensuche.ui \
    mainwindow.ui \
    travelagencyui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recources.qrc

DISTFILES += \
    README.md \
    add_11659161.png \
    alerts.png \
    car.png \
    disk_718913.png \
    explore_6387289.png \
    hotel.png \
    open.png \
    pay-per-click.png \
    plane.png \
    search.png \
    storage_3447332.png \
    train.png
