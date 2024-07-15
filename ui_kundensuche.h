/********************************************************************************
** Form generated from reading UI file 'kundensuche.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUNDENSUCHE_H
#define UI_KUNDENSUCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KundenSuche
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *KundenSuche)
    {
        if (KundenSuche->objectName().isEmpty())
            KundenSuche->setObjectName("KundenSuche");
        KundenSuche->resize(178, 121);
        verticalLayout = new QVBoxLayout(KundenSuche);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        idLabel = new QLabel(KundenSuche);
        idLabel->setObjectName("idLabel");

        horizontalLayout_2->addWidget(idLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        doubleSpinBox = new QDoubleSpinBox(KundenSuche);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMaximum(9999.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName("horizontalLayout");
        okPushButton = new QPushButton(KundenSuche);
        okPushButton->setObjectName("okPushButton");
        okPushButton->setFlat(false);

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(KundenSuche);
        cancelPushButton->setObjectName("cancelPushButton");

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(KundenSuche);

        okPushButton->setDefault(true);


        QMetaObject::connectSlotsByName(KundenSuche);
    } // setupUi

    void retranslateUi(QDialog *KundenSuche)
    {
        KundenSuche->setWindowTitle(QCoreApplication::translate("KundenSuche", "Dialog", nullptr));
        idLabel->setText(QCoreApplication::translate("KundenSuche", "ID", nullptr));
        okPushButton->setText(QCoreApplication::translate("KundenSuche", "OK", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("KundenSuche", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KundenSuche: public Ui_KundenSuche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUNDENSUCHE_H
