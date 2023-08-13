cmake_minimum_required(VERSION 3.27.2)

project(Chess VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(ChessConfig.h.in ChessConfig.h)


add_executable(Chess src/main.cpp

)

target_include_directories(Chess PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )