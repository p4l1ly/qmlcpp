cmake_minimum_required (VERSION 2.8)
project (QmlCpp)

set(CMAKE_AUTOMOC ON)
find_package(Qt5 REQUIRED Core Widgets Qml Quick QuickControls2)

add_executable(qmlcpp main.cpp App.cpp)
target_link_libraries(qmlcpp Qt5::Core Qt5::Qml Qt5::Widgets)
