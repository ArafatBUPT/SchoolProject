cmake_minimum_required(VERSION 3.13)
project(PhoneList)

set(CMAKE_CXX_STANDARD 14)

add_executable(PhoneList main.cpp Person.cpp Person.h phoneList.cpp phoneList.h)