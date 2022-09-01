cmake_minimum_required(VERSION 3.23)
project(ET)

set(CMAKE_CXX_STANDARD 14)

add_executable(ET main.cpp Sources/CreateFiles.cpp Headers/CreateFiles.h Sources/FileManager.cpp Headers/FileManager.h)
