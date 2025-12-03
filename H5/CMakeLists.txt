cmake_minimum_required(VERSION 3.16)

project(H5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H5 main.cpp
    ClassB.h ClassB.cpp
    ClassA1.h ClassA1.cpp
    ClassA2.h ClassA2.cpp)

include(GNUInstallDirs)
install(TARGETS H5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
