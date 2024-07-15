/********************************************************************************
** Form generated from reading UI file 'configsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGSETTINGS_H
#define UI_CONFIGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *overLappingTravels;
    QCheckBox *missingHotelBooking;
    QCheckBox *overLappingHotel;
    QCheckBox *overLappingRentalCar;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigSettings)
    {
        if (ConfigSettings->objectName().isEmpty())
            ConfigSettings->setObjectName("ConfigSettings");
        ConfigSettings->resize(239, 200);
        verticalLayout_2 = new QVBoxLayout(ConfigSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        overLappingTravels = new QCheckBox(ConfigSettings);
        overLappingTravels->setObjectName("overLappingTravels");

        verticalLayout->addWidget(overLappingTravels);

        missingHotelBooking = new QCheckBox(ConfigSettings);
        missingHotelBooking->setObjectName("missingHotelBooking");

        verticalLayout->addWidget(missingHotelBooking);

        overLappingHotel = new QCheckBox(ConfigSettings);
        overLappingHotel->setObjectName("overLappingHotel");

        verticalLayout->addWidget(overLappingHotel);

        overLappingRentalCar = new QCheckBox(ConfigSettings);
        overLappingRentalCar->setObjectName("overLappingRentalCar");

        verticalLayout->addWidget(overLappingRentalCar);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ConfigSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ConfigSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigSettings);
    } // setupUi

    void retranslateUi(QDialog *ConfigSettings)
    {
        ConfigSettings->setWindowTitle(QCoreApplication::translate("ConfigSettings", "Dialog", nullptr));
        overLappingTravels->setText(QCoreApplication::translate("ConfigSettings", "Reise\303\274berschneidungen", nullptr));
        missingHotelBooking->setText(QCoreApplication::translate("ConfigSettings", "Fehlende Hotelbuchung", nullptr));
        overLappingHotel->setText(QCoreApplication::translate("ConfigSettings", "\303\234berfl\303\274ssige Hotelbuchung", nullptr));
        overLappingRentalCar->setText(QCoreApplication::translate("ConfigSettings", "\303\234berfl\303\274ssige Mitwagenbuchung", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigSettings: public Ui_ConfigSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGSETTINGS_H
