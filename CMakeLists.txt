cmake_minimum_required(VERSION 3.10)  # Оставляем только одно объявление
project(Lab1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(MPI REQUIRED)
include_directories(${MPI_INCLUDE_PATH})