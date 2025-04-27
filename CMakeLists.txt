cmake_minimum_required(VERSION 3.16)
project(hotelli_graafiline_osa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(${PROJECT_NAME}
    main.cpp
    hotell.cpp
    hotell.h
    ruumid.cpp
    ruumid.h
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)