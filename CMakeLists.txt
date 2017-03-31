cmake_minimum_required (VERSION 2.6)

project (test_QtGamePad)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)

add_definitions(-DNOMINMAX)

qt5_wrap_cpp(moc_GamePadFunction.cpp GamePadFunction.h)


add_executable(test_QtGamePad main.cpp GamePadFunction.cpp GamePadFunction.h)

QT5_USE_MODULES(test_QtGamePad Gamepad Test Core)