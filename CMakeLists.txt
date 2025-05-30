cmake_minimum_required(VERSION 3.31)
project(FanUpperComputer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(include)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Network
        REQUIRED)
find_package(Boost REQUIRED)

add_executable(FanUpperComputer src/main.cpp
        src/mainwindow.cpp
        include/mainwindow.hpp
        src/mainwindow.ui
        include/opcode.hpp
)
target_link_libraries(FanUpperComputer
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Network
)
target_link_libraries(FanUpperComputer boost::boost)

