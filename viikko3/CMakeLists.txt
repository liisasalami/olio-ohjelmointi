cmake_minimum_required(VERSION 3.16)

project(viikko3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikko3 main.cpp
    chef.h
    chef.cpp
    italianchef.h italianchef.cpp)

include(GNUInstallDirs)
install(TARGETS viikko3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
