#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QWebEngineView>
#include <QLayout>
#include <QScreen>
#include <QApplication>
#include <iostream>
#include <QTabWidget>

class MainWin: public QMainWindow {
    Q_OBJECT
public:
    MainWin();
    ~MainWin() override;
private:
    void setTabWid();
    void setToolBar();
    void setWebEngine();
    void setMainWid();
    bool isFullScreen;
    int width;
    int height;
    QRect screenGeo;
    QToolBar *toolBar;
    QWidget *mainWid;
    QTabWidget *tabWid;
};

#endif //MAINWINDOW_H