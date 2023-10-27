cmake_minimum_required(VERSION 3.26)
project(Banque)

set(CMAKE_CXX_STANDARD 23)

add_executable(Banque main.cpp
        date.cpp
        date.h
        client.cpp
        Client.h
        compte.cpp
        compte.h
)
