cmake_minimum_required(VERSION 3.6)
project(ArreglosPaginados)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyList.cpp MyList.h FileManager.cpp FileManager.h PagedArray.cpp PagedArray.h)
add_executable(ArreglosPaginados ${SOURCE_FILES})