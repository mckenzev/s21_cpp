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
    s21::GLWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *layout_optional_btns;
    QLabel *lbl_filename;
    QHBoxLayout *layout_info_labels;
    QLabel *lbl_vertices;
    QLabel *lbl_vectors;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *layout_projection;
    QRadioButton *rb_parallel_projection;
    QLabel *lbl_projection;
    QRadioButton *rb_central_projection;
    QHBoxLayout *layout_size;
    QLabel *lbl_size;
    QDoubleSpinBox *sb_size;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *x_move_layout;
    QPushButton *btn_left_move;
    QPushButton *btn_right_move;
    QHBoxLayout *y_move_layout;
    QPushButton *btn_up_move;
    QPushButton *btn_down_move;
    QHBoxLayout *z_move_layout;
    QPushButton *btn_forward_move;
    QPushButton *btn_backward_move;
    QHBoxLayout *layout_up_down_rotate;
    QPushButton *btn_up_rotate;
    QPushButton *btn_down_rotate;
    QHBoxLayout *layout_left_right;
    QPushButton *btn_left_rotate;
    QPushButton *btn_right_rotate;
    QHBoxLayout *layout_clockwise_rotate;
    QPushButton *btn_clockwise_rotate;
    QPushButton *btn_counterlock_rotate;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *layout_render_settings;
    QRadioButton *rb_sphere;
    QCheckBox *cb_lines;
    QDoubleSpinBox *sb_lines_size;
    QDoubleSpinBox *sb_points_size;
    QPushButton *btn_points_color;
    QCheckBox *cb_points;
    QPushButton *btn_lines_color;
    QRadioButton *rb_cube;
    QCheckBox *cb_dotted;
    QPushButton *btn_bg_color;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_screenshot;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layout_main_btns;
    QPushButton *btn_open;
    QPushButton *btn_quit;
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
        widget = new s21::GLWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(widget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        layout_optional_btns = new QVBoxLayout();
        layout_optional_btns->setObjectName("layout_optional_btns");
        lbl_filename = new QLabel(centralwidget);
        lbl_filename->setObjectName("lbl_filename");
        QFont font;
        font.setPointSize(9);
        lbl_filename->setFont(font);
        lbl_filename->setAlignment(Qt::AlignmentFlag::AlignCenter);

        layout_optional_btns->addWidget(lbl_filename);

        layout_info_labels = new QHBoxLayout();
        layout_info_labels->setObjectName("layout_info_labels");
        lbl_vertices = new QLabel(centralwidget);
        lbl_vertices->setObjectName("lbl_vertices");

        layout_info_labels->addWidget(lbl_vertices);

        lbl_vectors = new QLabel(centralwidget);
        lbl_vectors->setObjectName("lbl_vectors");

        layout_info_labels->addWidget(lbl_vectors);


        layout_optional_btns->addLayout(layout_info_labels);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        layout_projection = new QGridLayout();
        layout_projection->setObjectName("layout_projection");
        rb_parallel_projection = new QRadioButton(tab);
        rb_parallel_projection->setObjectName("rb_parallel_projection");

        layout_projection->addWidget(rb_parallel_projection, 0, 2, 1, 1);

        lbl_projection = new QLabel(tab);
        lbl_projection->setObjectName("lbl_projection");
        QFont font1;
        font1.setPointSize(15);
        lbl_projection->setFont(font1);
        lbl_projection->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        layout_projection->addWidget(lbl_projection, 0, 0, 1, 1);

        rb_central_projection = new QRadioButton(tab);
        rb_central_projection->setObjectName("rb_central_projection");
        rb_central_projection->setChecked(true);

        layout_projection->addWidget(rb_central_projection, 0, 1, 1, 1);


        verticalLayout_6->addLayout(layout_projection);

        layout_size = new QHBoxLayout();
        layout_size->setObjectName("layout_size");
        lbl_size = new QLabel(tab);
        lbl_size->setObjectName("lbl_size");
        lbl_size->setFont(font1);
        lbl_size->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        layout_size->addWidget(lbl_size);

        sb_size = new QDoubleSpinBox(tab);
        sb_size->setObjectName("sb_size");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        sb_size->setFont(font2);
        sb_size->setMinimum(0.100000000000000);
        sb_size->setMaximum(2.000000000000000);
        sb_size->setSingleStep(0.010000000000000);
        sb_size->setValue(0.500000000000000);

        layout_size->addWidget(sb_size);


        verticalLayout_6->addLayout(layout_size);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        x_move_layout = new QHBoxLayout();
        x_move_layout->setObjectName("x_move_layout");
        btn_left_move = new QPushButton(tab_2);
        btn_left_move->setObjectName("btn_left_move");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_left_move->sizePolicy().hasHeightForWidth());
        btn_left_move->setSizePolicy(sizePolicy1);

        x_move_layout->addWidget(btn_left_move);

        btn_right_move = new QPushButton(tab_2);
        btn_right_move->setObjectName("btn_right_move");
        sizePolicy1.setHeightForWidth(btn_right_move->sizePolicy().hasHeightForWidth());
        btn_right_move->setSizePolicy(sizePolicy1);

        x_move_layout->addWidget(btn_right_move);


        verticalLayout_7->addLayout(x_move_layout);

        y_move_layout = new QHBoxLayout();
        y_move_layout->setObjectName("y_move_layout");
        btn_up_move = new QPushButton(tab_2);
        btn_up_move->setObjectName("btn_up_move");
        sizePolicy1.setHeightForWidth(btn_up_move->sizePolicy().hasHeightForWidth());
        btn_up_move->setSizePolicy(sizePolicy1);

        y_move_layout->addWidget(btn_up_move);

        btn_down_move = new QPushButton(tab_2);
        btn_down_move->setObjectName("btn_down_move");
        sizePolicy1.setHeightForWidth(btn_down_move->sizePolicy().hasHeightForWidth());
        btn_down_move->setSizePolicy(sizePolicy1);

        y_move_layout->addWidget(btn_down_move);


        verticalLayout_7->addLayout(y_move_layout);

        z_move_layout = new QHBoxLayout();
        z_move_layout->setObjectName("z_move_layout");
        btn_forward_move = new QPushButton(tab_2);
        btn_forward_move->setObjectName("btn_forward_move");
        sizePolicy1.setHeightForWidth(btn_forward_move->sizePolicy().hasHeightForWidth());
        btn_forward_move->setSizePolicy(sizePolicy1);

        z_move_layout->addWidget(btn_forward_move);

        btn_backward_move = new QPushButton(tab_2);
        btn_backward_move->setObjectName("btn_backward_move");
        sizePolicy1.setHeightForWidth(btn_backward_move->sizePolicy().hasHeightForWidth());
        btn_backward_move->setSizePolicy(sizePolicy1);

        z_move_layout->addWidget(btn_backward_move);


        verticalLayout_7->addLayout(z_move_layout);

        layout_up_down_rotate = new QHBoxLayout();
        layout_up_down_rotate->setObjectName("layout_up_down_rotate");
        btn_up_rotate = new QPushButton(tab_2);
        btn_up_rotate->setObjectName("btn_up_rotate");
        sizePolicy1.setHeightForWidth(btn_up_rotate->sizePolicy().hasHeightForWidth());
        btn_up_rotate->setSizePolicy(sizePolicy1);

        layout_up_down_rotate->addWidget(btn_up_rotate);

        btn_down_rotate = new QPushButton(tab_2);
        btn_down_rotate->setObjectName("btn_down_rotate");
        sizePolicy1.setHeightForWidth(btn_down_rotate->sizePolicy().hasHeightForWidth());
        btn_down_rotate->setSizePolicy(sizePolicy1);

        layout_up_down_rotate->addWidget(btn_down_rotate);


        verticalLayout_7->addLayout(layout_up_down_rotate);

        layout_left_right = new QHBoxLayout();
        layout_left_right->setObjectName("layout_left_right");
        btn_left_rotate = new QPushButton(tab_2);
        btn_left_rotate->setObjectName("btn_left_rotate");
        sizePolicy1.setHeightForWidth(btn_left_rotate->sizePolicy().hasHeightForWidth());
        btn_left_rotate->setSizePolicy(sizePolicy1);

        layout_left_right->addWidget(btn_left_rotate);

        btn_right_rotate = new QPushButton(tab_2);
        btn_right_rotate->setObjectName("btn_right_rotate");
        sizePolicy1.setHeightForWidth(btn_right_rotate->sizePolicy().hasHeightForWidth());
        btn_right_rotate->setSizePolicy(sizePolicy1);

        layout_left_right->addWidget(btn_right_rotate);


        verticalLayout_7->addLayout(layout_left_right);

        layout_clockwise_rotate = new QHBoxLayout();
        layout_clockwise_rotate->setObjectName("layout_clockwise_rotate");
        btn_clockwise_rotate = new QPushButton(tab_2);
        btn_clockwise_rotate->setObjectName("btn_clockwise_rotate");
        sizePolicy1.setHeightForWidth(btn_clockwise_rotate->sizePolicy().hasHeightForWidth());
        btn_clockwise_rotate->setSizePolicy(sizePolicy1);

        layout_clockwise_rotate->addWidget(btn_clockwise_rotate);

        btn_counterlock_rotate = new QPushButton(tab_2);
        btn_counterlock_rotate->setObjectName("btn_counterlock_rotate");
        sizePolicy1.setHeightForWidth(btn_counterlock_rotate->sizePolicy().hasHeightForWidth());
        btn_counterlock_rotate->setSizePolicy(sizePolicy1);

        layout_clockwise_rotate->addWidget(btn_counterlock_rotate);


        verticalLayout_7->addLayout(layout_clockwise_rotate);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        layout_render_settings = new QGridLayout();
        layout_render_settings->setObjectName("layout_render_settings");
        rb_sphere = new QRadioButton(tab_3);
        rb_sphere->setObjectName("rb_sphere");
        rb_sphere->setChecked(false);

        layout_render_settings->addWidget(rb_sphere, 1, 4, 1, 1);

        cb_lines = new QCheckBox(tab_3);
        cb_lines->setObjectName("cb_lines");
        cb_lines->setChecked(true);

        layout_render_settings->addWidget(cb_lines, 0, 0, 1, 1);

        sb_lines_size = new QDoubleSpinBox(tab_3);
        sb_lines_size->setObjectName("sb_lines_size");
        sb_lines_size->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        sb_lines_size->setDecimals(0);
        sb_lines_size->setMinimum(1.000000000000000);
        sb_lines_size->setMaximum(15.000000000000000);
        sb_lines_size->setSingleStep(1.000000000000000);

        layout_render_settings->addWidget(sb_lines_size, 0, 2, 1, 1);

        sb_points_size = new QDoubleSpinBox(tab_3);
        sb_points_size->setObjectName("sb_points_size");
        sb_points_size->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        sb_points_size->setDecimals(0);
        sb_points_size->setMinimum(1.000000000000000);
        sb_points_size->setMaximum(15.000000000000000);
        sb_points_size->setSingleStep(1.000000000000000);
        sb_points_size->setValue(1.000000000000000);

        layout_render_settings->addWidget(sb_points_size, 1, 2, 1, 1);

        btn_points_color = new QPushButton(tab_3);
        btn_points_color->setObjectName("btn_points_color");

        layout_render_settings->addWidget(btn_points_color, 1, 1, 1, 1);

        cb_points = new QCheckBox(tab_3);
        cb_points->setObjectName("cb_points");
        cb_points->setChecked(true);

        layout_render_settings->addWidget(cb_points, 1, 0, 1, 1);

        btn_lines_color = new QPushButton(tab_3);
        btn_lines_color->setObjectName("btn_lines_color");

        layout_render_settings->addWidget(btn_lines_color, 0, 1, 1, 1);

        rb_cube = new QRadioButton(tab_3);
        rb_cube->setObjectName("rb_cube");
        rb_cube->setChecked(true);

        layout_render_settings->addWidget(rb_cube, 1, 3, 1, 1);

        cb_dotted = new QCheckBox(tab_3);
        cb_dotted->setObjectName("cb_dotted");
        cb_dotted->setChecked(false);

        layout_render_settings->addWidget(cb_dotted, 0, 3, 1, 1);


        verticalLayout_5->addLayout(layout_render_settings);

        btn_bg_color = new QPushButton(tab_3);
        btn_bg_color->setObjectName("btn_bg_color");
        sizePolicy1.setHeightForWidth(btn_bg_color->sizePolicy().hasHeightForWidth());
        btn_bg_color->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(btn_bg_color);

        verticalSpacer_3 = new QSpacerItem(20, 332, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_screenshot = new QPushButton(tab_4);
        btn_screenshot->setObjectName("btn_screenshot");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_screenshot->sizePolicy().hasHeightForWidth());
        btn_screenshot->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(btn_screenshot);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_4, QString());

        layout_optional_btns->addWidget(tabWidget);


        verticalLayout_4->addLayout(layout_optional_btns);

        layout_main_btns = new QVBoxLayout();
        layout_main_btns->setObjectName("layout_main_btns");
        btn_open = new QPushButton(centralwidget);
        btn_open->setObjectName("btn_open");

        layout_main_btns->addWidget(btn_open);

        btn_quit = new QPushButton(centralwidget);
        btn_quit->setObjectName("btn_quit");

        layout_main_btns->addWidget(btn_quit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        layout_main_btns->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(layout_main_btns);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        View->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(View);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1083, 22));
        View->setMenuBar(menuBar);

        retranslateUi(View);
        QObject::connect(btn_quit, &QPushButton::clicked, View, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        lbl_filename->setText(QCoreApplication::translate("View", "#FILENAME#", nullptr));
        lbl_vertices->setText(QString());
        lbl_vectors->setText(QString());
        rb_parallel_projection->setText(QCoreApplication::translate("View", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        lbl_projection->setText(QCoreApplication::translate("View", "\320\237\321\200\320\276\320\265\320\272\321\206\320\270\321\217", nullptr));
        rb_central_projection->setText(QCoreApplication::translate("View", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        lbl_size->setText(QCoreApplication::translate("View", "\320\240\320\260\320\267\320\274\320\265\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("View", "General", nullptr));
        btn_left_move->setText(QCoreApplication::translate("View", "X++", nullptr));
#if QT_CONFIG(shortcut)
        btn_left_move->setShortcut(QCoreApplication::translate("View", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_right_move->setText(QCoreApplication::translate("View", "X--", nullptr));
#if QT_CONFIG(shortcut)
        btn_right_move->setShortcut(QCoreApplication::translate("View", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_up_move->setText(QCoreApplication::translate("View", "Y++", nullptr));
#if QT_CONFIG(shortcut)
        btn_up_move->setShortcut(QCoreApplication::translate("View", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_down_move->setText(QCoreApplication::translate("View", "Y--", nullptr));
#if QT_CONFIG(shortcut)
        btn_down_move->setShortcut(QCoreApplication::translate("View", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_forward_move->setText(QCoreApplication::translate("View", "Z++", nullptr));
#if QT_CONFIG(shortcut)
        btn_forward_move->setShortcut(QCoreApplication::translate("View", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_backward_move->setText(QCoreApplication::translate("View", "Z--", nullptr));
#if QT_CONFIG(shortcut)
        btn_backward_move->setShortcut(QCoreApplication::translate("View", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_up_rotate->setText(QCoreApplication::translate("View", "Up", nullptr));
#if QT_CONFIG(shortcut)
        btn_up_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_down_rotate->setText(QCoreApplication::translate("View", "Down", nullptr));
#if QT_CONFIG(shortcut)
        btn_down_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_left_rotate->setText(QCoreApplication::translate("View", "Left", nullptr));
#if QT_CONFIG(shortcut)
        btn_left_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_right_rotate->setText(QCoreApplication::translate("View", "Right", nullptr));
#if QT_CONFIG(shortcut)
        btn_right_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_clockwise_rotate->setText(QCoreApplication::translate("View", "Clockwise", nullptr));
#if QT_CONFIG(shortcut)
        btn_clockwise_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_counterlock_rotate->setText(QCoreApplication::translate("View", "Counterclock", nullptr));
#if QT_CONFIG(shortcut)
        btn_counterlock_rotate->setShortcut(QCoreApplication::translate("View", "Ctrl+9", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("View", "Move", nullptr));
        rb_sphere->setText(QCoreApplication::translate("View", "sphere", nullptr));
        cb_lines->setText(QCoreApplication::translate("View", "Lines", nullptr));
        btn_points_color->setText(QCoreApplication::translate("View", "Color", nullptr));
        cb_points->setText(QCoreApplication::translate("View", "Points", nullptr));
        btn_lines_color->setText(QCoreApplication::translate("View", "Color", nullptr));
        rb_cube->setText(QCoreApplication::translate("View", "cube", nullptr));
        cb_dotted->setText(QCoreApplication::translate("View", "dotted", nullptr));
        btn_bg_color->setText(QCoreApplication::translate("View", "background color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("View", "Look", nullptr));
        btn_screenshot->setText(QCoreApplication::translate("View", "Screenshot", nullptr));
#if QT_CONFIG(shortcut)
        btn_screenshot->setShortcut(QCoreApplication::translate("View", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("View", "Screen", nullptr));
        btn_open->setText(QCoreApplication::translate("View", "Open", nullptr));
#if QT_CONFIG(shortcut)
        btn_open->setShortcut(QCoreApplication::translate("View", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_quit->setText(QCoreApplication::translate("View", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        btn_quit->setShortcut(QCoreApplication::translate("View", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
