cmake_minimum_required(VERSION 3.26)
project(Banque)

set(CMAKE_CXX_STANDARD 23)

add_executable(Banque main.cpp
        Date.cpp
        Date.h
        Client.cpp
        Client.h)
