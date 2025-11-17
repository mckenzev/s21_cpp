/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    s21::GLWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_4;
    QLabel *label_2;
    QRadioButton *radioButton_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *rotateCounterclockwiseButton;
    QPushButton *rotateUpButton;
    QPushButton *moveRightButton;
    QPushButton *moveLeftButton;
    QPushButton *rotateLeftButton;
    QPushButton *rotateRightButton;
    QPushButton *rotateClockwiseButton;
    QPushButton *moveBackwardButton;
    QPushButton *moveForwardButton;
    QPushButton *moveUpButton;
    QPushButton *rotateDownButton;
    QPushButton *moveDownButton;
    QWidget *tab_3;
    QPushButton *changeBGColorButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radio_sphere;
    QCheckBox *checkBox_ln;
    QDoubleSpinBox *lnWidthSpinBox;
    QDoubleSpinBox *pnSizeSpinBox;
    QPushButton *verticesColorButton;
    QCheckBox *checkBox_pn;
    QPushButton *edgesColorButton;
    QRadioButton *radio_cube;
    QCheckBox *checkBox_ln_2;
    QWidget *tab_4;
    QPushButton *screenshotButton;
    QPushButton *screencastButton;
    QLabel *gif_timer_label;
    QPushButton *QuitButton;
    QPushButton *loadModelFileButton;
    QLabel *label;
    QLabel *vectors;
    QLabel *vertex;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName("View");
        View->setEnabled(true);
        View->resize(1083, 746);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(View->sizePolicy().hasHeightForWidth());
        View->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: indigo;\n"
""));
        widget = new s21::GLWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 701, 751));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(700, 90, 381, 321));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 361, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(gridLayoutWidget_3);
        radioButton_4->setObjectName("radioButton_4");

        gridLayout_3->addWidget(radioButton_4, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget_3);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setChecked(true);

        gridLayout_3->addWidget(radioButton_5, 0, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(tab);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(140, 120, 171, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setMinimum(0.100000000000000);
        doubleSpinBox->setMaximum(2.000000000000000);
        doubleSpinBox->setSingleStep(0.010000000000000);
        doubleSpinBox->setValue(0.500000000000000);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 104, 20));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(40, -10, 304, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rotateCounterclockwiseButton = new QPushButton(gridLayoutWidget_2);
        rotateCounterclockwiseButton->setObjectName("rotateCounterclockwiseButton");

        gridLayout_2->addWidget(rotateCounterclockwiseButton, 5, 1, 1, 1);

        rotateUpButton = new QPushButton(gridLayoutWidget_2);
        rotateUpButton->setObjectName("rotateUpButton");

        gridLayout_2->addWidget(rotateUpButton, 3, 1, 1, 1);

        moveRightButton = new QPushButton(gridLayoutWidget_2);
        moveRightButton->setObjectName("moveRightButton");

        gridLayout_2->addWidget(moveRightButton, 0, 0, 1, 1);

        moveLeftButton = new QPushButton(gridLayoutWidget_2);
        moveLeftButton->setObjectName("moveLeftButton");

        gridLayout_2->addWidget(moveLeftButton, 0, 1, 1, 1);

        rotateLeftButton = new QPushButton(gridLayoutWidget_2);
        rotateLeftButton->setObjectName("rotateLeftButton");

        gridLayout_2->addWidget(rotateLeftButton, 4, 0, 1, 1);

        rotateRightButton = new QPushButton(gridLayoutWidget_2);
        rotateRightButton->setObjectName("rotateRightButton");

        gridLayout_2->addWidget(rotateRightButton, 4, 1, 1, 1);

        rotateClockwiseButton = new QPushButton(gridLayoutWidget_2);
        rotateClockwiseButton->setObjectName("rotateClockwiseButton");

        gridLayout_2->addWidget(rotateClockwiseButton, 5, 0, 1, 1);

        moveBackwardButton = new QPushButton(gridLayoutWidget_2);
        moveBackwardButton->setObjectName("moveBackwardButton");

        gridLayout_2->addWidget(moveBackwardButton, 2, 0, 1, 1);

        moveForwardButton = new QPushButton(gridLayoutWidget_2);
        moveForwardButton->setObjectName("moveForwardButton");

        gridLayout_2->addWidget(moveForwardButton, 2, 1, 1, 1);

        moveUpButton = new QPushButton(gridLayoutWidget_2);
        moveUpButton->setObjectName("moveUpButton");

        gridLayout_2->addWidget(moveUpButton, 1, 1, 1, 1);

        rotateDownButton = new QPushButton(gridLayoutWidget_2);
        rotateDownButton->setObjectName("rotateDownButton");

        gridLayout_2->addWidget(rotateDownButton, 3, 0, 1, 1);

        moveDownButton = new QPushButton(gridLayoutWidget_2);
        moveDownButton->setObjectName("moveDownButton");

        gridLayout_2->addWidget(moveDownButton, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        changeBGColorButton = new QPushButton(tab_3);
        changeBGColorButton->setObjectName("changeBGColorButton");
        changeBGColorButton->setGeometry(QRect(110, 150, 141, 31));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 30, 387, 90));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radio_sphere = new QRadioButton(gridLayoutWidget);
        radio_sphere->setObjectName("radio_sphere");
        radio_sphere->setChecked(false);

        gridLayout->addWidget(radio_sphere, 1, 4, 1, 1);

        checkBox_ln = new QCheckBox(gridLayoutWidget);
        checkBox_ln->setObjectName("checkBox_ln");
        checkBox_ln->setChecked(false);

        gridLayout->addWidget(checkBox_ln, 0, 0, 1, 1);

        lnWidthSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        lnWidthSpinBox->setObjectName("lnWidthSpinBox");
        lnWidthSpinBox->setFocusPolicy(Qt::ClickFocus);
        lnWidthSpinBox->setDecimals(0);
        lnWidthSpinBox->setMinimum(1.000000000000000);
        lnWidthSpinBox->setMaximum(15.000000000000000);
        lnWidthSpinBox->setSingleStep(1.000000000000000);

        gridLayout->addWidget(lnWidthSpinBox, 0, 2, 1, 1);

        pnSizeSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        pnSizeSpinBox->setObjectName("pnSizeSpinBox");
        pnSizeSpinBox->setFocusPolicy(Qt::ClickFocus);
        pnSizeSpinBox->setDecimals(0);
        pnSizeSpinBox->setMinimum(1.000000000000000);
        pnSizeSpinBox->setMaximum(15.000000000000000);
        pnSizeSpinBox->setSingleStep(1.000000000000000);
        pnSizeSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(pnSizeSpinBox, 1, 2, 1, 1);

        verticesColorButton = new QPushButton(gridLayoutWidget);
        verticesColorButton->setObjectName("verticesColorButton");

        gridLayout->addWidget(verticesColorButton, 1, 1, 1, 1);

        checkBox_pn = new QCheckBox(gridLayoutWidget);
        checkBox_pn->setObjectName("checkBox_pn");
        checkBox_pn->setChecked(false);

        gridLayout->addWidget(checkBox_pn, 1, 0, 1, 1);

        edgesColorButton = new QPushButton(gridLayoutWidget);
        edgesColorButton->setObjectName("edgesColorButton");

        gridLayout->addWidget(edgesColorButton, 0, 1, 1, 1);

        radio_cube = new QRadioButton(gridLayoutWidget);
        radio_cube->setObjectName("radio_cube");
        radio_cube->setChecked(true);

        gridLayout->addWidget(radio_cube, 1, 3, 1, 1);

        checkBox_ln_2 = new QCheckBox(gridLayoutWidget);
        checkBox_ln_2->setObjectName("checkBox_ln_2");
        checkBox_ln_2->setChecked(false);

        gridLayout->addWidget(checkBox_ln_2, 0, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        screenshotButton = new QPushButton(tab_4);
        screenshotButton->setObjectName("screenshotButton");
        screenshotButton->setGeometry(QRect(120, 30, 143, 101));
        screencastButton = new QPushButton(tab_4);
        screencastButton->setObjectName("screencastButton");
        screencastButton->setGeometry(QRect(120, 140, 143, 101));
        gif_timer_label = new QLabel(tab_4);
        gif_timer_label->setObjectName("gif_timer_label");
        gif_timer_label->setGeometry(QRect(20, 260, 76, 19));
        tabWidget->addTab(tab_4, QString());
        QuitButton = new QPushButton(centralwidget);
        QuitButton->setObjectName("QuitButton");
        QuitButton->setGeometry(QRect(740, 460, 300, 32));
        loadModelFileButton = new QPushButton(centralwidget);
        loadModelFileButton->setObjectName("loadModelFileButton");
        loadModelFileButton->setGeometry(QRect(740, 420, 300, 32));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(710, 10, 371, 41));
        QFont font2;
        font2.setPointSize(9);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        vectors = new QLabel(centralwidget);
        vectors->setObjectName("vectors");
        vectors->setGeometry(QRect(710, 70, 161, 16));
        vertex = new QLabel(centralwidget);
        vertex->setObjectName("vertex");
        vertex->setGeometry(QRect(910, 70, 161, 16));
        View->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(View);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1083, 24));
        View->setMenuBar(menuBar);

        retranslateUi(View);
        QObject::connect(QuitButton, &QPushButton::clicked, View, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        radioButton_4->setText(QCoreApplication::translate("View", "Parallel", nullptr));
        label_2->setText(QCoreApplication::translate("View", "Projection", nullptr));
        radioButton_5->setText(QCoreApplication::translate("View", "Central", nullptr));
        label_4->setText(QCoreApplication::translate("View", "Size", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("View", "General", nullptr));
        rotateCounterclockwiseButton->setText(QCoreApplication::translate("View", "Counterclock", nullptr));
#if QT_CONFIG(shortcut)
        rotateCounterclockwiseButton->setShortcut(QCoreApplication::translate("View", "Ctrl+9", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateUpButton->setText(QCoreApplication::translate("View", "Up", nullptr));
#if QT_CONFIG(shortcut)
        rotateUpButton->setShortcut(QCoreApplication::translate("View", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        moveRightButton->setText(QCoreApplication::translate("View", "X--", nullptr));
#if QT_CONFIG(shortcut)
        moveRightButton->setShortcut(QCoreApplication::translate("View", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        moveLeftButton->setText(QCoreApplication::translate("View", "X++", nullptr));
#if QT_CONFIG(shortcut)
        moveLeftButton->setShortcut(QCoreApplication::translate("View", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateLeftButton->setText(QCoreApplication::translate("View", "Left", nullptr));
#if QT_CONFIG(shortcut)
        rotateLeftButton->setShortcut(QCoreApplication::translate("View", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateRightButton->setText(QCoreApplication::translate("View", "Right", nullptr));
#if QT_CONFIG(shortcut)
        rotateRightButton->setShortcut(QCoreApplication::translate("View", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateClockwiseButton->setText(QCoreApplication::translate("View", "Clockwise", nullptr));
#if QT_CONFIG(shortcut)
        rotateClockwiseButton->setShortcut(QCoreApplication::translate("View", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        moveBackwardButton->setText(QCoreApplication::translate("View", "Z--", nullptr));
#if QT_CONFIG(shortcut)
        moveBackwardButton->setShortcut(QCoreApplication::translate("View", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        moveForwardButton->setText(QCoreApplication::translate("View", "Z++", nullptr));
#if QT_CONFIG(shortcut)
        moveForwardButton->setShortcut(QCoreApplication::translate("View", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        moveUpButton->setText(QCoreApplication::translate("View", "Y++", nullptr));
#if QT_CONFIG(shortcut)
        moveUpButton->setShortcut(QCoreApplication::translate("View", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateDownButton->setText(QCoreApplication::translate("View", "Down", nullptr));
#if QT_CONFIG(shortcut)
        rotateDownButton->setShortcut(QCoreApplication::translate("View", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        moveDownButton->setText(QCoreApplication::translate("View", "Y--", nullptr));
#if QT_CONFIG(shortcut)
        moveDownButton->setShortcut(QCoreApplication::translate("View", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("View", "Move", nullptr));
        changeBGColorButton->setText(QCoreApplication::translate("View", "background color", nullptr));
        radio_sphere->setText(QCoreApplication::translate("View", "sphere", nullptr));
        checkBox_ln->setText(QCoreApplication::translate("View", "Lines", nullptr));
        verticesColorButton->setText(QCoreApplication::translate("View", "Color", nullptr));
        checkBox_pn->setText(QCoreApplication::translate("View", "Points", nullptr));
        edgesColorButton->setText(QCoreApplication::translate("View", "Color", nullptr));
        radio_cube->setText(QCoreApplication::translate("View", "cube", nullptr));
        checkBox_ln_2->setText(QCoreApplication::translate("View", "dotted", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("View", "Look", nullptr));
        screenshotButton->setText(QCoreApplication::translate("View", "Screenshot", nullptr));
#if QT_CONFIG(shortcut)
        screenshotButton->setShortcut(QCoreApplication::translate("View", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        screencastButton->setText(QCoreApplication::translate("View", "Start Recording", nullptr));
#if QT_CONFIG(shortcut)
        screencastButton->setShortcut(QCoreApplication::translate("View", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        gif_timer_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("View", "Screen", nullptr));
        QuitButton->setText(QCoreApplication::translate("View", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        QuitButton->setShortcut(QCoreApplication::translate("View", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        loadModelFileButton->setText(QCoreApplication::translate("View", "OPEN", nullptr));
#if QT_CONFIG(shortcut)
        loadModelFileButton->setShortcut(QCoreApplication::translate("View", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("View", "#FILENAME#", nullptr));
        vectors->setText(QString());
        vertex->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
