cmake_minimum_required(VERSION 3.8)
project(Test1a)

add_executable(test1a
        main.cpp
        )

set_target_properties(test1a PROPERTIES CXX_STANDARD 17)