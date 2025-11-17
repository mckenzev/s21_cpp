QT += core gui openglwidgets opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32 {
    LIBS += -lopengl32
}

SOURCES += \
    ../model/model.cc \
    ../controller/controller.cc \
    glwidget.cc \
    view.cc \
    ../main.cc

HEADERS += \
    ../utils.h \
    ../model/model.h \
    ../controller/controller.h \
    glwidget.h \
    view.h

FORMS += view.ui

INCLUDEPATH += view


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
