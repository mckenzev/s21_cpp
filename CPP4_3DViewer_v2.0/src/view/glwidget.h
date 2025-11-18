#ifndef VIEWER_V_2_0_SRC_VIEW_GLWIDGET_H
#define VIEWER_V_2_0_SRC_VIEW_GLWIDGET_H

#include <QColor>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QtGui>
#include <QtOpenGL>
#include <vector>

namespace s21 {
enum class PointType { SPHERE, CUBE };
enum class ProjectionType {CENTRAL, PARALLEL };
enum class LineType {SOLID, DOTTED };

class GLWidget : public QOpenGLFunctions, public QOpenGLWidget {
public:
    struct Colors {
        QColor bg_color{Qt::gray};
        QColor line_color{Qt::black};
        QColor point_color{Qt::black};
    };

    struct VisualSettings {
        int point_sz{1};
        int line_sz{1};
        PointType point_type{PointType::SPHERE};
        ProjectionType projection_type{ProjectionType::CENTRAL};
        LineType line_type{LineType::SOLID};
        bool lines{true};
        bool points{true};
    };

    struct Transform {
        float x_rot{0};
        float y_rot{0};
    };

    GLWidget();
    explicit GLWidget(QWidget *parent = nullptr);
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void DrawLines();
    void DrawPoints();
    void Change();
    void SetProjection();

    void SetVertices(std::vector<double>* vertices_ptr) { vertices_ = vertices_ptr; }

    void SetCoordinates(std::vector<double>* coord_ptr) { coordinates_ = coord_ptr; }

    void SetBackgroundColor(QColor color) { colors_.bg_color = color; }

    void SetLineColor(QColor color) { colors_.line_color = color; }

    void SetPointColor(QColor color) { colors_.point_color = color; }

    void SetLineSize(int val) { settings_.line_sz = val; }

    void SetPointSize(int val) { settings_.point_sz = val; }

    void SetRenderLine(bool is_render) {settings_.lines = is_render; }

    void SetRenderPoints(bool is_render) {settings_.points = is_render; }

    void SetPointsType(PointType type) {settings_.point_type = type; }

    void SetLineType(LineType type) {settings_.line_type = type; }

    void SetProjectionType(ProjectionType type) {settings_.projection_type = type; }

    const Colors& GetColors() const { return colors_; }

    const VisualSettings& GetVisualSettings() const { return settings_; }



private:
    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;

    std::vector<double>* vertices_ = nullptr;
    std::vector<double>* coordinates_ = nullptr;

    Colors colors_;
    VisualSettings settings_;
    Transform transform_;
    QPoint m_pos_{};
};

}  // namespace s21
#endif  // VIEWER_V_2_0_SRC_VIEW_GLWIDGET_H
