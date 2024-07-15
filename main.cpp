//Std-Libs
#include <QApplication>
#include <memory>

//Header
#include "travelagencyui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shared_ptr<TravelAgency> UpAndAway = make_shared<TravelAgency>();
    TravelAgencyUI w(UpAndAway);
    w.show();
    return a.exec();    
}

