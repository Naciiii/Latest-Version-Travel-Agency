/********************************************************************************
** Form generated from reading UI file 'travelagencyui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVELAGENCYUI_H
#define UI_TRAVELAGENCYUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TravelAgencyUI
{
public:
    QAction *actionEinlesen;
    QAction *actionKunden;
    QAction *actionSpeichern;
    QAction *actionHinzuf_gen;
    QAction *actionFehlermeldungen;
    QAction *actionAlle_checken;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *kundenGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLineEdit *idLineEdit;
    QTableWidget *ReisenTableWidget;
    QGroupBox *reiseGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *reiseIdLineEdit;
    QLabel *label_5;
    QTableWidget *BuchungenTableWidget;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuSuche;
    QMenu *menuBuchung;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TravelAgencyUI)
    {
        if (TravelAgencyUI->objectName().isEmpty())
            TravelAgencyUI->setObjectName("TravelAgencyUI");
        TravelAgencyUI->resize(754, 675);
        actionEinlesen = new QAction(TravelAgencyUI);
        actionEinlesen->setObjectName("actionEinlesen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEinlesen->setIcon(icon);
        actionKunden = new QAction(TravelAgencyUI);
        actionKunden->setObjectName("actionKunden");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKunden->setIcon(icon1);
        actionSpeichern = new QAction(TravelAgencyUI);
        actionSpeichern->setObjectName("actionSpeichern");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/disk_718913.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpeichern->setIcon(icon2);
        actionSpeichern->setAutoRepeat(true);
        actionSpeichern->setVisible(true);
        actionHinzuf_gen = new QAction(TravelAgencyUI);
        actionHinzuf_gen->setObjectName("actionHinzuf_gen");
        actionHinzuf_gen->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/add_11659161.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHinzuf_gen->setIcon(icon3);
        actionFehlermeldungen = new QAction(TravelAgencyUI);
        actionFehlermeldungen->setObjectName("actionFehlermeldungen");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/alerts.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFehlermeldungen->setIcon(icon4);
        actionAlle_checken = new QAction(TravelAgencyUI);
        actionAlle_checken->setObjectName("actionAlle_checken");
        centralwidget = new QWidget(TravelAgencyUI);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        kundenGroupBox = new QGroupBox(centralwidget);
        kundenGroupBox->setObjectName("kundenGroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kundenGroupBox->sizePolicy().hasHeightForWidth());
        kundenGroupBox->setSizePolicy(sizePolicy);
        kundenGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout = new QFormLayout(kundenGroupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(kundenGroupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(kundenGroupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        nameLineEdit = new QLineEdit(kundenGroupBox);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setMaximumSize(QSize(300, 16777215));
        nameLineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, nameLineEdit);

        label_3 = new QLabel(kundenGroupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        idLineEdit = new QLineEdit(kundenGroupBox);
        idLineEdit->setObjectName("idLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(idLineEdit->sizePolicy().hasHeightForWidth());
        idLineEdit->setSizePolicy(sizePolicy1);
        idLineEdit->setMinimumSize(QSize(20, 0));
        idLineEdit->setMaximumSize(QSize(50, 16777215));
        idLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, idLineEdit);

        ReisenTableWidget = new QTableWidget(kundenGroupBox);
        if (ReisenTableWidget->columnCount() < 4)
            ReisenTableWidget->setColumnCount(4);
        QFont font;
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        ReisenTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ReisenTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ReisenTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ReisenTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        ReisenTableWidget->setObjectName("ReisenTableWidget");
        ReisenTableWidget->setEnabled(true);
        ReisenTableWidget->setFrameShape(QFrame::NoFrame);
        ReisenTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ReisenTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        ReisenTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        ReisenTableWidget->setRowCount(0);
        ReisenTableWidget->horizontalHeader()->setStretchLastSection(false);
        ReisenTableWidget->verticalHeader()->setVisible(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, ReisenTableWidget);


        verticalLayout->addWidget(kundenGroupBox);

        reiseGroupBox = new QGroupBox(centralwidget);
        reiseGroupBox->setObjectName("reiseGroupBox");
        reiseGroupBox->setEnabled(true);
        sizePolicy.setHeightForWidth(reiseGroupBox->sizePolicy().hasHeightForWidth());
        reiseGroupBox->setSizePolicy(sizePolicy);
        reiseGroupBox->setLayoutDirection(Qt::LeftToRight);
        reiseGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2 = new QFormLayout(reiseGroupBox);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(reiseGroupBox);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        reiseIdLineEdit = new QLineEdit(reiseGroupBox);
        reiseIdLineEdit->setObjectName("reiseIdLineEdit");
        reiseIdLineEdit->setMaximumSize(QSize(50, 16777215));
        reiseIdLineEdit->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, reiseIdLineEdit);

        label_5 = new QLabel(reiseGroupBox);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        BuchungenTableWidget = new QTableWidget(reiseGroupBox);
        if (BuchungenTableWidget->columnCount() < 5)
            BuchungenTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BuchungenTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        BuchungenTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        BuchungenTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        BuchungenTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        BuchungenTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        BuchungenTableWidget->setObjectName("BuchungenTableWidget");
        BuchungenTableWidget->setEnabled(true);
        BuchungenTableWidget->setLayoutDirection(Qt::LeftToRight);
        BuchungenTableWidget->setAutoFillBackground(false);
        BuchungenTableWidget->setFrameShape(QFrame::NoFrame);
        BuchungenTableWidget->setFrameShadow(QFrame::Sunken);
        BuchungenTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BuchungenTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        BuchungenTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        BuchungenTableWidget->setShowGrid(true);
        BuchungenTableWidget->setGridStyle(Qt::SolidLine);
        BuchungenTableWidget->setWordWrap(true);
        BuchungenTableWidget->setCornerButtonEnabled(true);
        BuchungenTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        BuchungenTableWidget->horizontalHeader()->setStretchLastSection(false);
        BuchungenTableWidget->verticalHeader()->setVisible(false);
        BuchungenTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        BuchungenTableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        BuchungenTableWidget->verticalHeader()->setStretchLastSection(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, BuchungenTableWidget);


        verticalLayout->addWidget(reiseGroupBox);

        TravelAgencyUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TravelAgencyUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 754, 37));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuSuche = new QMenu(menubar);
        menuSuche->setObjectName("menuSuche");
        menuBuchung = new QMenu(menubar);
        menuBuchung->setObjectName("menuBuchung");
        TravelAgencyUI->setMenuBar(menubar);
        statusbar = new QStatusBar(TravelAgencyUI);
        statusbar->setObjectName("statusbar");
        TravelAgencyUI->setStatusBar(statusbar);
        toolBar = new QToolBar(TravelAgencyUI);
        toolBar->setObjectName("toolBar");
        toolBar->setEnabled(true);
        TravelAgencyUI->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuSuche->menuAction());
        menubar->addAction(menuBuchung->menuAction());
        menuMenu->addAction(actionEinlesen);
        menuMenu->addAction(actionSpeichern);
        menuSuche->addAction(actionKunden);
        menuBuchung->addAction(actionHinzuf_gen);
        menuBuchung->addAction(actionFehlermeldungen);
        menuBuchung->addAction(actionAlle_checken);
        toolBar->addAction(actionEinlesen);
        toolBar->addAction(actionKunden);
        toolBar->addAction(actionSpeichern);
        toolBar->addAction(actionHinzuf_gen);
        toolBar->addAction(actionFehlermeldungen);

        retranslateUi(TravelAgencyUI);

        QMetaObject::connectSlotsByName(TravelAgencyUI);
    } // setupUi

    void retranslateUi(QMainWindow *TravelAgencyUI)
    {
        TravelAgencyUI->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "TravelAgencyUI", nullptr));
        actionEinlesen->setText(QCoreApplication::translate("TravelAgencyUI", "Einlesen", nullptr));
#if QT_CONFIG(shortcut)
        actionEinlesen->setShortcut(QCoreApplication::translate("TravelAgencyUI", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKunden->setText(QCoreApplication::translate("TravelAgencyUI", "Kunden", nullptr));
#if QT_CONFIG(shortcut)
        actionKunden->setShortcut(QCoreApplication::translate("TravelAgencyUI", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeichern->setText(QCoreApplication::translate("TravelAgencyUI", "Speichern", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeichern->setShortcut(QCoreApplication::translate("TravelAgencyUI", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHinzuf_gen->setText(QCoreApplication::translate("TravelAgencyUI", "Settings", nullptr));
        actionFehlermeldungen->setText(QCoreApplication::translate("TravelAgencyUI", "Fehlermeldungen", nullptr));
        actionAlle_checken->setText(QCoreApplication::translate("TravelAgencyUI", "Alle checken", nullptr));
        kundenGroupBox->setTitle(QCoreApplication::translate("TravelAgencyUI", "Kundendaten", nullptr));
        label->setText(QCoreApplication::translate("TravelAgencyUI", "Kunden-ID:", nullptr));
        label_2->setText(QCoreApplication::translate("TravelAgencyUI", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("TravelAgencyUI", "Reisen:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ReisenTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TravelAgencyUI", "Reise-ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ReisenTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TravelAgencyUI", "Anfang der Reise ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ReisenTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TravelAgencyUI", "Ende der Reise", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ReisenTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TravelAgencyUI", "TravelD", nullptr));
        reiseGroupBox->setTitle(QCoreApplication::translate("TravelAgencyUI", "Reise", nullptr));
        label_4->setText(QCoreApplication::translate("TravelAgencyUI", "Reise-ID:", nullptr));
        label_5->setText(QCoreApplication::translate("TravelAgencyUI", "Buchungen:", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = BuchungenTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TravelAgencyUI", "Buchungstyp", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = BuchungenTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TravelAgencyUI", "Start", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = BuchungenTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TravelAgencyUI", "Ende", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = BuchungenTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TravelAgencyUI", "Preis", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = BuchungenTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TravelAgencyUI", "ID", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("TravelAgencyUI", "Datei", nullptr));
        menuSuche->setTitle(QCoreApplication::translate("TravelAgencyUI", "Suche", nullptr));
        menuBuchung->setTitle(QCoreApplication::translate("TravelAgencyUI", "Buchung", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TravelAgencyUI: public Ui_TravelAgencyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVELAGENCYUI_H
