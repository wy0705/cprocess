cmake_minimum_required(VERSION 3.17)
project(untitled5)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled5 main.cpp poimx.cpp wrlock.cpp hashmap.cpp map.cpp McsLock.h McsLock.cpp MyMcsLock.h ref.h Myshall.h proc.cpp proc.h)
TARGET_LINK_LIBRARIES( untitled5 pthread)#pthread是多线程静态库