#ifndef DISPLAYALERTS_H
#define DISPLAYALERTS_H

#include <QDialog>
#include <QString>

#include <TravelAgency.h>
#include <Check.h>

namespace Ui {
class DisplayAlerts;
}

class DisplayAlerts : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayAlerts(shared_ptr<Check> &checkPtr, QWidget *parent = nullptr);
    ~DisplayAlerts();

private:
    Ui::DisplayAlerts *ui;
    shared_ptr<Check> checkPtr;
};

#endif // DISPLAYALERTS_H
