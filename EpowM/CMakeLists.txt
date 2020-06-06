cmake_minimum_required(VERSION 3.16)
project(EpowM)

set(CMAKE_CXX_STANDARD 20)
add_library( EpowM.h EpowM.cpp)
add_executable(EpowM main.cpp EpowM.h)