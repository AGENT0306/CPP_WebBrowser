#include <QApplication>
#include <QPushButton>
#include "header_files/mainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    const auto mw = new MainWin();
    mw->show();
    return QApplication::exec();

}