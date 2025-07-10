#include "../header_files/mainWindow.h"

MainWin::MainWin() {

    //Set window settings
    setWindowTitle("Entropic");
    setStyleSheet("background-color: rgb(44, 46, 48);");
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Get screen dimensions and set minimum size as a percentage of screen size
    QScreen *screen = QApplication::primaryScreen();
    screenGeo = screen->geometry();
    width = screenGeo.width() * 0.6;  // 60% of screen width
    height = screenGeo.height() * 0.5; // 50% of screen height
    setMinimumSize(QSize(width, height));

    //Run set-up functions
    setToolBar();
    setWebEngine();
}

MainWin::~MainWin() {

}

void MainWin::setToolBar() {
    QToolBar *toolBar = new QToolBar(this);
    toolBar->setOrientation(Qt::Horizontal);
    toolBar->setGeometry(QRect(QPoint(0, 0), QSize(width, height * 0.05)));
    toolBar->setFloatable(false);
    toolBar->setMovable(false);
    toolBar->setStyleSheet("background-color: rgb(0, 0, 0); font-color: rgb(225, 225, 225);");
    //toolBar->addAction();
    std::cout << "ToolBar Created\n";
}

void MainWin::setToolBox() {
    std::cout << "ToolBox Created\n";
}

void MainWin::setWebEngine() {
    // QWebEngineView* view = new QWebEngineView(this);
    // view->resize(400, 600);
    // view->load(QUrl("https://reitrebicka.tech"));
    std::cout << "Web Engine Created\n";
}
