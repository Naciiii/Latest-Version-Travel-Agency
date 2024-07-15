/********************************************************************************
** Form generated from reading UI file 'displayalerts.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYALERTS_H
#define UI_DISPLAYALERTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayAlerts
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *DisplayAlerts)
    {
        if (DisplayAlerts->objectName().isEmpty())
            DisplayAlerts->setObjectName("DisplayAlerts");
        DisplayAlerts->resize(896, 300);
        horizontalLayout = new QHBoxLayout(DisplayAlerts);
        horizontalLayout->setObjectName("horizontalLayout");
        tableWidget = new QTableWidget(DisplayAlerts);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(DisplayAlerts);

        QMetaObject::connectSlotsByName(DisplayAlerts);
    } // setupUi

    void retranslateUi(QDialog *DisplayAlerts)
    {
        DisplayAlerts->setWindowTitle(QCoreApplication::translate("DisplayAlerts", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DisplayAlerts", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DisplayAlerts", "Meldung", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayAlerts: public Ui_DisplayAlerts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYALERTS_H
