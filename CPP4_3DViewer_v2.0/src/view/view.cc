#include "view.h"

#include "ui_view.h"

namespace s21 {

View::View(QWidget* parent)
    : QMainWindow(parent),
      ui(new Ui::View),
      controller_(coordinates_, vertices_, filename_) {
    ui->setupUi(this);
    auto widget = ui->widget;
    widget->SetVertices(&this->vertices_);
    widget->SetCoordinates(&this->coordinates_);
    // loadSetts();
    // SetSettings();
    ui->lbl_filename->setWordWrap(true);
    if (last_obj.isEmpty()) {
        on_btn_open_clicked();
    } else {
        LoadMod(last_obj);
    }
}

View::~View() {
    // SaveSetts();
    delete ui;
}


/*
void View::LoadChecker() {
    auto widget = ui->widget;
    const auto& settings = widget->GetVisualSettings();

    ui->sb_points_size->setValue(settings.point_sz);
    ui->sb_lines_size->setValue(settings.line_sz);

    if (settings.projection_type == ProjectionType::PARALLEL) {
        ui->rb_central_projection->setChecked(false);
    } else {
        ui->rb_parallel_projection->setChecked(true);
    }

    if (settings.point_type == PointType::SPHERE) {
        ui->rb_sphere->setChecked(true);
    } else {
        ui->rb_cube->setChecked(true);
    }

    if (settings.line_type == LineType::DOTTED) {
        ui->cb_dotted->setChecked(true);
    } else {
        ui->cb_dotted->setChecked(false);
    }

    if (settings.points) {
        ui->cb_points->setChecked(true);
    } else {
        ui->cb_lines->setChecked(false);
    }

    if (settings.lines) {
        ui->cb_lines->setChecked(true);
    } else {
        ui->cb_lines->setChecked(false);
    }
}
*/

void View::SetSettings() {
    auto widget = ui->widget;
    const auto& settings = widget->GetVisualSettings();

    ui->sb_points_size->setValue(settings.point_sz);
    ui->sb_lines_size->setValue(settings.line_sz);

    if (settings.projection_type == ProjectionType::PARALLEL) {
        ui->rb_parallel_projection->setChecked(true);
        ui->rb_central_projection->setChecked(false);
    } else {
        ui->rb_central_projection->setChecked(true);
        ui->rb_parallel_projection->setChecked(false);
    }

    if (settings.point_type == PointType::SPHERE) {
        ui->rb_sphere->setChecked(true);
        ui->rb_cube->setChecked(false);
    } else {
        ui->rb_cube->setChecked(true);
        ui->rb_sphere->setChecked(false);
    }

    if (settings.line_type == LineType::DOTTED) {
        ui->cb_dotted->setChecked(true);
    } else {
        ui->cb_dotted->setChecked(false);
    }

    if (settings.points) {
        ui->cb_points->setChecked(true);
    } else {
        ui->cb_lines->setChecked(false);
    }

    if (settings.lines) {
        ui->cb_lines->setChecked(true);
    } else {
        ui->cb_lines->setChecked(false);
    }
}

bool View::on_btn_open_clicked() {
    bool res = false;
    QString filename = QFileDialog::getOpenFileName(this, "choose file", QCoreApplication::applicationDirPath(), "Text Files (*.obj)");
    if (filename.isEmpty()) {
        res = true;
    } else {
        filename_ = filename.toStdString();
        LoadMod(std::move(filename));
    }
    return res;
}

int View::LoadMod(QString filename) {
    size_t res = controller_.Parse();

    if (res) {
        ui->tabWidget->setEnabled(true);
        last_obj = filename;
        ui->lbl_filename->setText(filename);
        ui->lbl_vectors->setText("Vectors: " + QString::number(coordinates_.size() / 6));
        ui->lbl_vertices->setText("Vertices: " + QString::number(vertices_.size() / 3));
    } else {
        ui->lbl_filename->setText("ERROR. Please try another file");
        on_btn_open_clicked();
    }

    ui->widget->update();
    return res;
}

void View::on_btn_bg_color_clicked() {
    QColor color = QColorDialog::getColor(Qt::blue, this);
    ui->widget->SetBackgroundColor(color);
    ui->widget->update();
}

void View::on_sb_points_size_valueChanged(double val) {
    ui->widget->SetPointSize(val);
    ui->widget->update();
}

void View::on_sb_lines_size_valueChanged(double val) {
    ui->widget->SetLineSize(val);
    ui->widget->update();
}

void View::on_cb_lines_clicked(bool is_checked) {
    ui->widget->SetRenderLine(is_checked);
    ui->widget->update();
}

void View::on_cb_points_clicked(bool is_checked) {
    ui->widget->SetRenderPoints(is_checked);
    ui->widget->update();
}

void View::on_rb_sphere_clicked(bool is_checked) {
    auto point_type = is_checked ? PointType::SPHERE : PointType::CUBE;
    ui->widget->SetPointsType(point_type);
    ui->widget->update();
}

void View::on_rb_cube_clicked(bool is_checked) {
    auto point_type = !is_checked ? PointType::SPHERE : PointType::CUBE;
    ui->widget->SetPointsType(point_type);
    ui->widget->update();
}

void View::on_cb_dotted_clicked(bool is_checked) {
    auto line_type = is_checked ? LineType::DOTTED : LineType::SOLID;
    ui->widget->SetLineType(line_type);
    ui->widget->update();
}

void View::on_rb_parallel_projection_clicked(bool) {
    ui->widget->SetProjectionType(ProjectionType::PARALLEL);
    ui->widget->update();
}

void View::on_rb_central_projection_clicked(bool) {
    ui->widget->SetProjectionType(ProjectionType::CENTRAL);
    ui->widget->update();
}

void View::MoveRepeat() {
    controller_.FillingCoords();
    ui->widget->update();
}

void View::on_btn_lines_color_clicked() {
    QColor color = QColorDialog::getColor(Qt::blue, this);
    ui->widget->SetLineColor(color);
    ui->widget->update();
}

void View::on_btn_points_color_clicked() {
    QColor color = QColorDialog::getColor(Qt::blue, this);
    ui->widget->SetPointColor(color);
    ui->widget->update();
}

void View::Move(double step, s21::Axis axis) {
    controller_.Move(step, axis);
    MoveRepeat();
}

void View::Rotate(double step, s21::Axis axis) {
    controller_.Rotate(step, axis);
    MoveRepeat();
}

namespace {
    constexpr double kStep = 0.1;
}

void View::on_btn_right_move_clicked() { Move(-kStep, s21::Axis::X); }

void View::on_btn_left_move_clicked() { Move(kStep, s21::Axis::X); }

void View::on_btn_down_move_clicked() { Move(-kStep, s21::Axis::Y); }

void View::on_btn_up_move_clicked() { Move(kStep, s21::Axis::Y); }

void View::on_btn_backward_move_clicked() { Move(-kStep, s21::Axis::Z); }

void View::on_btn_forward_move_clicked() { Move(kStep, s21::Axis::Z); }

void View::on_btn_down_rotate_clicked() { Rotate(kStep, s21::Axis::X); }

void View::on_btn_up_rotate_clicked() { Rotate(-kStep, s21::Axis::X); }

void View::on_btn_left_rotate_clicked() { Rotate(kStep, s21::Axis::Y); }

void View::on_btn_right_rotate_clicked() { Rotate(-kStep, s21::Axis::Y); }

void View::on_btn_clockwise_rotate_clicked() { Rotate(-kStep, s21::Axis::Z); }

void View::on_btn_counterlock_rotate_clicked() { Rotate(kStep, s21::Axis::Z); }

void View::on_sb_size_valueChanged(double val) {
    controller_.Normalization();
    controller_.Scale(val);
    MoveRepeat();
}

// void View::saveSetts() {
//   QSettings settings(QCoreApplication::applicationDirPath() + "/3d_settings.conf", QSettings::NativeFormat);
//   settings.setValue("Colors/bg", ui->widget->bg_color_.name(QColor::HexArgb));
//   settings.setValue("Colors/ln", ui->widget->line_color_.name(QColor::HexArgb));
//   settings.setValue("Colors/pn", ui->widget->point_color_.name(QColor::HexArgb));
//   settings.setValue("Size/point", ui->widget->point_sz);
//   settings.setValue("Size/line", ui->widget->line_sz);
//   settings.setValue("Proj/proj", ui->widget->projection);
//   settings.setValue("Types/pn", ui->widget->point_type);
//   settings.setValue("Types/ln", ui->widget->dashed);
//   settings.setValue("Exist/pn", ui->widget->points);
//   settings.setValue("Exist/ln", ui->widget->lines);
//   settings.setValue("Last_file", last_obj);
// }

// void View::loadSetts() {
//   QSettings settings(QCoreApplication::applicationDirPath() + "/3d_settings.conf", QSettings::NativeFormat);
//   auto widget = ui->widget;
//   widget->SetBackgroundColor(settings.value("Colors/bg", wh).toString());
//   widget->SetLineColor(settings.value("Colors/ln", bk).toString());
//   widget->SetPointColor(settings.value("Colors/pn", bl).toString());

//   ui->widget->line_sz = settings.value("Size/line", 1).toInt();
//   ui->widget->point_sz = settings.value("Size/point", 1).toInt();
//   ui->widget->projection = settings.value("Proj/proj", 1).toInt();
//   ui->widget->point_type = settings.value("Types/pn", 0).toInt();
//   ui->widget->dashed = settings.value("Types/ln", 0).toInt();
//   ui->widget->points = settings.value("Exist/pn", 0).toInt();
//   ui->widget->lines = settings.value("Exist/ln", 1).toInt();
//   last_obj = settings.value("Last_file", "").toString();
// }

void View::on_btn_screenshot_clicked() {
    QImage img(ui->widget->size(), QImage::Format_RGB32);
    QPainter painter(&img);
    QString tmp = QCoreApplication::applicationDirPath();
    tmp.resize(tmp.size() - 38);
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save file"), tmp + "~/images.jpg", tr("JPG (*.jpg);; BMP (*.bmp)"));
    ui->widget->render(&painter);

    if (img.save(fileName)) {
        QMessageBox msgBox;
        msgBox.setText("Screenshot has been saved");
        msgBox.exec();
    } else {
        QMessageBox::warning(this, "", "Save failed.");
    }
}

}  // namespace s21
