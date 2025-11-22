#pragma once

#include <QApplication>
#include <QColorDialog>
#include <QFileDialog>
#include <QImage>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>
#include <QTextEdit>
#include <QtCore>

#include "../controller/controller.h"
#include "../utils.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class View;
}
QT_END_NAMESPACE

namespace s21 {
class View : public QMainWindow {
Q_OBJECT

public:
  View(QWidget* parent = nullptr);
  ~View();
  // void SaveSetts();
  // void loadSetts();


 private slots:
  void SetSettings();
  int LoadMod(QString filename);
  void MoveRepeat();

  bool on_btn_open_clicked();
  void on_btn_bg_color_clicked();
  void on_cb_lines_clicked(bool);
  void on_cb_points_clicked(bool);
  void on_sb_points_size_valueChanged(double);
  void on_rb_sphere_clicked(bool);
  void on_rb_cube_clicked(bool);
  void on_cb_dotted_clicked(bool checked);
  void on_sb_lines_size_valueChanged(double arg1);
  void on_rb_central_projection_clicked(bool);
  void on_rb_parallel_projection_clicked(bool);
  void on_btn_lines_color_clicked();
  void on_btn_points_color_clicked();
  void on_btn_right_move_clicked();
  void on_btn_left_move_clicked();
  void on_btn_down_move_clicked();
  void on_btn_up_move_clicked();
  void on_btn_backward_move_clicked();
  void on_btn_forward_move_clicked();
  void on_btn_down_rotate_clicked();
  void on_btn_up_rotate_clicked();
  void on_btn_left_rotate_clicked();
  void on_btn_right_rotate_clicked();
  void on_btn_clockwise_rotate_clicked();
  void on_btn_counterlock_rotate_clicked();
  void on_sb_size_valueChanged(double);
  void on_btn_screenshot_clicked();

  void Rotate(double step, s21::Axis axis);
  void Move(double step, s21::Axis axis);

 private:

  Ui::View* ui;
  std::string filename_;
  std::vector<double> coordinates_;
  std::vector<double> vertices_;
  Controller controller_;
  QString last_obj;

};
}  // namespace s21
