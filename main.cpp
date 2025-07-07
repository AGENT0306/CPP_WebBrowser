#include <QApplication>
#include <QPushButton>
#include "header_files/mainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    const auto test = new MainWin();
    test->show();
    // QPushButton button("Hello world!", nullptr);
    // button.resize(200, 100);
    // button.show();
    return QApplication::exec();

}