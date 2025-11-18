#include "glwidget.h"

namespace s21 {

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent) {}

void GLWidget::initializeGL() {
  initializeOpenGLFunctions();
  glEnable(GL_DEPTH_TEST);
}

void GLWidget::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void GLWidget::SetProjection() {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  auto type = settings_.projection_type;
  if (type == ProjectionType::CENTRAL) {
    glFrustum(-0.5, 0.5, -0.5, 0.5, 1, 9999999);
  } else {
    glOrtho(-1, 1, -1, 1, 1, 9999999);
  }
}

void GLWidget::paintGL() {
  SetProjection();
  auto bg_color = colors_.bg_color;
  glClearColor(bg_color.redF(), bg_color.greenF(), bg_color.blueF(), bg_color.alphaF());
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glTranslated(0, 0, -2);  //-scale);
  glRotatef(transform_.x_rot, 1, 0, 0);
  glRotatef(transform_.y_rot, 0, 1, 0);

  if (settings_.points) {
    DrawPoints();
  }

  if (settings_.lines) {
    DrawLines();
  }
}

void GLWidget::DrawPoints() {
  glPointSize(settings_.point_sz);
  auto color = colors_.point_color;

  glColor3d(color.redF(), color.greenF(), color.blueF());
  glVertexPointer(3, GL_DOUBLE, 0, vertices_->data());
  glEnableClientState(GL_VERTEX_ARRAY);

auto type = settings_.point_type;
  if (type == PointType::SPHERE) {
    glEnable(GL_POINT_SMOOTH);
  } else {
    glDisable(GL_POINT_SMOOTH);
  }

  glDrawArrays(GL_POINTS, 0, vertices_->size() / 3);
  glDisableClientState(GL_VERTEX_ARRAY);
}

void GLWidget::DrawLines() {
  glLineWidth(settings_.line_sz);

  auto color = colors_.line_color;
  glColor3d(color.redF(), color.greenF(), color.blueF());

  glVertexPointer(3, GL_DOUBLE, 0, coordinates_->data());
  glEnableClientState(GL_VERTEX_ARRAY);

    auto type = settings_.line_type;
  if (type == LineType::DOTTED) {
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(3, 0xAAA);
  } else {
    glDisable(GL_LINE_STIPPLE);
  }

  glDrawArrays(GL_LINES, 0, coordinates_->size() / 3);
  glDisableClientState(GL_VERTEX_ARRAY);
}

void GLWidget::mousePressEvent(QMouseEvent *event) {
    m_pos_ = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event) {
  transform_.x_rot = 1 / M_PI * (event->pos().y() - m_pos_.y());
  transform_.y_rot = 1 / M_PI * (event->pos().x() - m_pos_.x());
  update();
}
}  // namespace s21
