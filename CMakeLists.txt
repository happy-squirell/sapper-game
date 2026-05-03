cmake_minimum_required(VERSION 3.10)

project(sapper_game LANGUAGES CXX)

add_executable(main main.cpp src/mines.cpp src/field.cpp)

target_include_directories(main PUBLIC headers/)
