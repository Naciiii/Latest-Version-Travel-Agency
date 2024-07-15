#include "kundensuche.h"
#include "ui_kundensuche.h"

KundenSuche::KundenSuche(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KundenSuche),
    customerId(-1)
{
    ui->setupUi(this);
}

KundenSuche::~KundenSuche()
{
    delete ui;
}

void KundenSuche::on_okPushButton_clicked()
{
    customerId = ui->doubleSpinBox->value();
    accept();
}

long KundenSuche::getCustomerId() const
{
    return customerId;
}





