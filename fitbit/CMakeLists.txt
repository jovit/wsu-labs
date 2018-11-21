cmake_minimum_required(VERSION 3.6)
project(fitbit)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c")

set(SOURCE_FILES main.c fitbitdata.h fitbitdata.c sleep.h sleep.c)

add_executable(fitbit ${SOURCE_FILES})