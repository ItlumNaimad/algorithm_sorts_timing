cmake_minimum_required(VERSION 3.26)
project(11_12_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(11_12_2023 main.cpp
        sort_alg.cpp
        sort_alg.h
        sort_alg_files.cpp
        sort_alg_files.h
        data_generating.cpp
        data_generating.h
        timing_of_sorts.cpp
        timing_of_sorts.h
)
