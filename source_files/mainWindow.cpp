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
    setMainWid();
    setTabWid();
    setWebEngine();

    // QTabBar* test = new QTabBar(this);
    // mainWid->setStyleSheet("background-color: rgb(44, 0, 0);");
}

MainWin::~MainWin() = default;

void MainWin::setToolBar() {
    toolBar = new QToolBar();
    toolBar->setOrientation(Qt::Horizontal);
    toolBar->setMinimumSize(QSize(width, static_cast<int>(height * 0.04)));
    toolBar->setFloatable(false);
    toolBar->setMovable(false);
    toolBar->setStyleSheet("background-color: rgb(0, 0, 0);");
    this->addToolBar(Qt::TopToolBarArea, toolBar);
    std::cout << "ToolBar Created\n";
}

void MainWin::setWebEngine() {
    //QWebEngineView* view = new QWebEngineView(this);
    //view->resize(400, 600);
    // view->load(QUrl("https://reitrebicka.tech"));
    std::cout << "Web Engine Created\n";
}

void MainWin::setMainWid() {
    mainWid = new QWidget();
    mainWid->setStyleSheet("background-color: rgb(44, 46, 48);");
    this->setCentralWidget(mainWid);
    std::cout << "MainWin Created\n";
}

void MainWin::setTabWid() {
    tabWid = new QTabWidget(mainWid);
    tabWid->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    QWidget *widget = new QWidget();
    widget->setStyleSheet("background-color: rgb(0, 255, 48);");
    widget->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    QWidget *test = new QWidget();
    test->setStyleSheet("background-color: rgb(255, 0, 255);");
    tabWid->addTab(widget, "Tab 1");
    tabWid->addTab(test, "Tab 2");
    std::cout << "TabBar Created\n";
}
