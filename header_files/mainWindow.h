#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QWebEngineView>
#include <QLayout>
#include <QScreen>
#include <QApplication>
#include <iostream>

class MainWin: public QMainWindow {
    Q_OBJECT
public:
    MainWin();
    ~MainWin() override;
private:
    bool isFullScreen;
    void setToolBar();
    void setToolBox();
    void setWebEngine();
    int width;
    int height;
    QRect screenGeo;
};

#endif //MAINWINDOW_H
