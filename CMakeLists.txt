cmake_minimum_required(VERSION 3.6)
project(Progra_Dinamica)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Mochila.cpp main.cpp Mochila.h Fibo.cpp Fibo.h)
add_executable(Progra_Dinamica ${SOURCE_FILES})