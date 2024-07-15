#pragma once

#include <QDialog>

#include <TravelAgency.h>

namespace Ui {
class ConfigSettings;
}

class ConfigSettings : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigSettings(shared_ptr<TravelAgency> &travelAgency, QWidget *parent = nullptr);
    ~ConfigSettings();

private slots:
    void on_buttonBox_accepted();

private:
    shared_ptr<TravelAgency> UpAndAway;
    Ui::ConfigSettings *ui;
};


