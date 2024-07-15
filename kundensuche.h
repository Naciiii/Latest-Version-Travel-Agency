#pragma once

//Std-Libs
#include <QDialog>
#include <QMessageBox>

//Header-Files
#include <TravelAgency.h>

namespace Ui {
class KundenSuche;
}

class KundenSuche : public QDialog {
    Q_OBJECT

public:
    explicit KundenSuche(QWidget *parent = nullptr);

    long getCustomerId() const;

    ~KundenSuche();

    private
        slots:

    void on_okPushButton_clicked();

private:
    Ui::KundenSuche *ui;
    long customerId;
};


