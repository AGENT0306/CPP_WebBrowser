cmake_minimum_required(VERSION 3.30)
project(WebBrowser)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
  Core
  Gui
  Widgets
  REQUIRED)

add_executable(WebBrowser main.cpp
        source_files/mainWindow.cpp
        header_files/mainWindow.h)

target_link_libraries(WebBrowser
  Qt::Core
  Qt::Gui
  Qt::Widgets
)
