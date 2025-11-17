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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    s21::GLWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_vertices;
    QLabel *label_vectors;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_4;
    QLabel *label_2;
    QRadioButton *radioButton_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *moveForwardButton;
    QPushButton *moveBackwardButton;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *rotateUpButton;
    QPushButton *rotateDownButton;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *rotateLeftButton;
    QPushButton *rotateRightButton;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *rotateClockwiseButton;
    QPushButton *rotateCounterclockwiseButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
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
    QPushButton *changeBGColorButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QLabel *gif_timer_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *screenshotButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loadModelFileButton;
    QPushButton *QuitButton;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName("View");
        View->setEnabled(true);
        View->resize(1083, 746);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(View->sizePolicy().hasHeightForWidth());
        View->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new s21::GLWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_vertices = new QLabel(centralwidget);
        label_vertices->setObjectName("label_vertices");

        horizontalLayout_11->addWidget(label_vertices);

        label_vectors = new QLabel(centralwidget);
        label_vectors->setObjectName("label_vectors");

        horizontalLayout_11->addWidget(label_vectors);


        verticalLayout_3->addLayout(horizontalLayout_11);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        radioButton_4 = new QRadioButton(tab);
        radioButton_4->setObjectName("radioButton_4");

        gridLayout_3->addWidget(radioButton_4, 0, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        radioButton_5 = new QRadioButton(tab);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setChecked(true);

        gridLayout_3->addWidget(radioButton_5, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox = new QDoubleSpinBox(tab);
        doubleSpinBox->setObjectName("doubleSpinBox");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        doubleSpinBox->setFont(font2);
        doubleSpinBox->setMinimum(0.100000000000000);
        doubleSpinBox->setMaximum(2.000000000000000);
        doubleSpinBox->setSingleStep(0.010000000000000);
        doubleSpinBox->setValue(0.500000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        moveLeftButton = new QPushButton(tab_2);
        moveLeftButton->setObjectName("moveLeftButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moveLeftButton->sizePolicy().hasHeightForWidth());
        moveLeftButton->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(moveLeftButton);

        moveRightButton = new QPushButton(tab_2);
        moveRightButton->setObjectName("moveRightButton");
        sizePolicy1.setHeightForWidth(moveRightButton->sizePolicy().hasHeightForWidth());
        moveRightButton->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(moveRightButton);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        moveUpButton = new QPushButton(tab_2);
        moveUpButton->setObjectName("moveUpButton");
        sizePolicy1.setHeightForWidth(moveUpButton->sizePolicy().hasHeightForWidth());
        moveUpButton->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(moveUpButton);

        moveDownButton = new QPushButton(tab_2);
        moveDownButton->setObjectName("moveDownButton");
        sizePolicy1.setHeightForWidth(moveDownButton->sizePolicy().hasHeightForWidth());
        moveDownButton->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(moveDownButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        moveForwardButton = new QPushButton(tab_2);
        moveForwardButton->setObjectName("moveForwardButton");
        sizePolicy1.setHeightForWidth(moveForwardButton->sizePolicy().hasHeightForWidth());
        moveForwardButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(moveForwardButton);

        moveBackwardButton = new QPushButton(tab_2);
        moveBackwardButton->setObjectName("moveBackwardButton");
        sizePolicy1.setHeightForWidth(moveBackwardButton->sizePolicy().hasHeightForWidth());
        moveBackwardButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(moveBackwardButton);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        rotateUpButton = new QPushButton(tab_2);
        rotateUpButton->setObjectName("rotateUpButton");
        sizePolicy1.setHeightForWidth(rotateUpButton->sizePolicy().hasHeightForWidth());
        rotateUpButton->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(rotateUpButton);

        rotateDownButton = new QPushButton(tab_2);
        rotateDownButton->setObjectName("rotateDownButton");
        sizePolicy1.setHeightForWidth(rotateDownButton->sizePolicy().hasHeightForWidth());
        rotateDownButton->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(rotateDownButton);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        rotateLeftButton = new QPushButton(tab_2);
        rotateLeftButton->setObjectName("rotateLeftButton");
        sizePolicy1.setHeightForWidth(rotateLeftButton->sizePolicy().hasHeightForWidth());
        rotateLeftButton->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(rotateLeftButton);

        rotateRightButton = new QPushButton(tab_2);
        rotateRightButton->setObjectName("rotateRightButton");
        sizePolicy1.setHeightForWidth(rotateRightButton->sizePolicy().hasHeightForWidth());
        rotateRightButton->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(rotateRightButton);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        rotateClockwiseButton = new QPushButton(tab_2);
        rotateClockwiseButton->setObjectName("rotateClockwiseButton");
        sizePolicy1.setHeightForWidth(rotateClockwiseButton->sizePolicy().hasHeightForWidth());
        rotateClockwiseButton->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(rotateClockwiseButton);

        rotateCounterclockwiseButton = new QPushButton(tab_2);
        rotateCounterclockwiseButton->setObjectName("rotateCounterclockwiseButton");
        sizePolicy1.setHeightForWidth(rotateCounterclockwiseButton->sizePolicy().hasHeightForWidth());
        rotateCounterclockwiseButton->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(rotateCounterclockwiseButton);


        verticalLayout_7->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        radio_sphere = new QRadioButton(tab_3);
        radio_sphere->setObjectName("radio_sphere");
        radio_sphere->setChecked(false);

        gridLayout->addWidget(radio_sphere, 1, 4, 1, 1);

        checkBox_ln = new QCheckBox(tab_3);
        checkBox_ln->setObjectName("checkBox_ln");
        checkBox_ln->setChecked(false);

        gridLayout->addWidget(checkBox_ln, 0, 0, 1, 1);

        lnWidthSpinBox = new QDoubleSpinBox(tab_3);
        lnWidthSpinBox->setObjectName("lnWidthSpinBox");
        lnWidthSpinBox->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        lnWidthSpinBox->setDecimals(0);
        lnWidthSpinBox->setMinimum(1.000000000000000);
        lnWidthSpinBox->setMaximum(15.000000000000000);
        lnWidthSpinBox->setSingleStep(1.000000000000000);

        gridLayout->addWidget(lnWidthSpinBox, 0, 2, 1, 1);

        pnSizeSpinBox = new QDoubleSpinBox(tab_3);
        pnSizeSpinBox->setObjectName("pnSizeSpinBox");
        pnSizeSpinBox->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        pnSizeSpinBox->setDecimals(0);
        pnSizeSpinBox->setMinimum(1.000000000000000);
        pnSizeSpinBox->setMaximum(15.000000000000000);
        pnSizeSpinBox->setSingleStep(1.000000000000000);
        pnSizeSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(pnSizeSpinBox, 1, 2, 1, 1);

        verticesColorButton = new QPushButton(tab_3);
        verticesColorButton->setObjectName("verticesColorButton");

        gridLayout->addWidget(verticesColorButton, 1, 1, 1, 1);

        checkBox_pn = new QCheckBox(tab_3);
        checkBox_pn->setObjectName("checkBox_pn");
        checkBox_pn->setChecked(false);

        gridLayout->addWidget(checkBox_pn, 1, 0, 1, 1);

        edgesColorButton = new QPushButton(tab_3);
        edgesColorButton->setObjectName("edgesColorButton");

        gridLayout->addWidget(edgesColorButton, 0, 1, 1, 1);

        radio_cube = new QRadioButton(tab_3);
        radio_cube->setObjectName("radio_cube");
        radio_cube->setChecked(true);

        gridLayout->addWidget(radio_cube, 1, 3, 1, 1);

        checkBox_ln_2 = new QCheckBox(tab_3);
        checkBox_ln_2->setObjectName("checkBox_ln_2");
        checkBox_ln_2->setChecked(false);

        gridLayout->addWidget(checkBox_ln_2, 0, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        changeBGColorButton = new QPushButton(tab_3);
        changeBGColorButton->setObjectName("changeBGColorButton");
        sizePolicy1.setHeightForWidth(changeBGColorButton->sizePolicy().hasHeightForWidth());
        changeBGColorButton->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(changeBGColorButton);

        verticalSpacer_3 = new QSpacerItem(20, 332, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gif_timer_label = new QLabel(tab_4);
        gif_timer_label->setObjectName("gif_timer_label");
        gif_timer_label->setGeometry(QRect(20, 260, 76, 19));
        verticalLayoutWidget = new QWidget(tab_4);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 351, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        screenshotButton = new QPushButton(verticalLayoutWidget);
        screenshotButton->setObjectName("screenshotButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(screenshotButton->sizePolicy().hasHeightForWidth());
        screenshotButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(screenshotButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loadModelFileButton = new QPushButton(centralwidget);
        loadModelFileButton->setObjectName("loadModelFileButton");

        verticalLayout_2->addWidget(loadModelFileButton);

        QuitButton = new QPushButton(centralwidget);
        QuitButton->setObjectName("QuitButton");

        verticalLayout_2->addWidget(QuitButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(horizontalLayout);

        View->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(View);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1083, 22));
        View->setMenuBar(menuBar);

        retranslateUi(View);
        QObject::connect(QuitButton, &QPushButton::clicked, View, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        label->setText(QCoreApplication::translate("View", "#FILENAME#", nullptr));
        label_vertices->setText(QString());
        label_vectors->setText(QString());
        radioButton_4->setText(QCoreApplication::translate("View", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("View", "\320\237\321\200\320\276\320\265\320\272\321\206\320\270\321\217", nullptr));
        radioButton_5->setText(QCoreApplication::translate("View", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("View", "\320\240\320\260\320\267\320\274\320\265\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("View", "General", nullptr));
        moveLeftButton->setText(QCoreApplication::translate("View", "X++", nullptr));
#if QT_CONFIG(shortcut)
        moveLeftButton->setShortcut(QCoreApplication::translate("View", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        moveRightButton->setText(QCoreApplication::translate("View", "X--", nullptr));
#if QT_CONFIG(shortcut)
        moveRightButton->setShortcut(QCoreApplication::translate("View", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        moveUpButton->setText(QCoreApplication::translate("View", "Y++", nullptr));
#if QT_CONFIG(shortcut)
        moveUpButton->setShortcut(QCoreApplication::translate("View", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        moveDownButton->setText(QCoreApplication::translate("View", "Y--", nullptr));
#if QT_CONFIG(shortcut)
        moveDownButton->setShortcut(QCoreApplication::translate("View", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        moveForwardButton->setText(QCoreApplication::translate("View", "Z++", nullptr));
#if QT_CONFIG(shortcut)
        moveForwardButton->setShortcut(QCoreApplication::translate("View", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        moveBackwardButton->setText(QCoreApplication::translate("View", "Z--", nullptr));
#if QT_CONFIG(shortcut)
        moveBackwardButton->setShortcut(QCoreApplication::translate("View", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateUpButton->setText(QCoreApplication::translate("View", "Up", nullptr));
#if QT_CONFIG(shortcut)
        rotateUpButton->setShortcut(QCoreApplication::translate("View", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        rotateDownButton->setText(QCoreApplication::translate("View", "Down", nullptr));
#if QT_CONFIG(shortcut)
        rotateDownButton->setShortcut(QCoreApplication::translate("View", "Ctrl+2", nullptr));
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
        rotateCounterclockwiseButton->setText(QCoreApplication::translate("View", "Counterclock", nullptr));
#if QT_CONFIG(shortcut)
        rotateCounterclockwiseButton->setShortcut(QCoreApplication::translate("View", "Ctrl+9", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("View", "Move", nullptr));
        radio_sphere->setText(QCoreApplication::translate("View", "sphere", nullptr));
        checkBox_ln->setText(QCoreApplication::translate("View", "Lines", nullptr));
        verticesColorButton->setText(QCoreApplication::translate("View", "Color", nullptr));
        checkBox_pn->setText(QCoreApplication::translate("View", "Points", nullptr));
        edgesColorButton->setText(QCoreApplication::translate("View", "Color", nullptr));
        radio_cube->setText(QCoreApplication::translate("View", "cube", nullptr));
        checkBox_ln_2->setText(QCoreApplication::translate("View", "dotted", nullptr));
        changeBGColorButton->setText(QCoreApplication::translate("View", "background color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("View", "Look", nullptr));
        gif_timer_label->setText(QString());
        screenshotButton->setText(QCoreApplication::translate("View", "Screenshot", nullptr));
#if QT_CONFIG(shortcut)
        screenshotButton->setShortcut(QCoreApplication::translate("View", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("View", "Screen", nullptr));
        loadModelFileButton->setText(QCoreApplication::translate("View", "OPEN", nullptr));
#if QT_CONFIG(shortcut)
        loadModelFileButton->setShortcut(QCoreApplication::translate("View", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        QuitButton->setText(QCoreApplication::translate("View", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        QuitButton->setShortcut(QCoreApplication::translate("View", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
