cmake_minimum_required(VERSION 3.27.2)

project(Chess VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Automatically generate a .h file with project information to reference in code. 
configure_file(src/ChessConfig.h.in ChessConfig.h)

# Define all the header files in your project
set(HEADER_DIR src)
set(HEADER_FILES ${HEADER_DIR}/util.hpp)

# Define all the cpp files in your project
set(CPP_DIR src)
set(CPP_FILES ${CPP_DIR}/main.cpp)

add_executable(Chess ${HEADER_FILES} ${CPP_FILES})

target_include_directories(Chess PUBLIC "${PROJECT_BINARY_DIR}")

# set(Boost_USE_STATIC_LIBS OFF) 
# set(Boost_USE_MULTITHREADED OFF)  
# set(Boost_USE_STATIC_RUNTIME OFF) 
# find_package(Boost 1.45.0 COMPONENTS test) 

# if(Boost_FOUND)
#     include_directories(${Boost_INCLUDE_DIRS}) 
#     add_executable(progname file1.cxx file2.cxx) 
#     target_link_libraries(progname ${Boost_LIBRARIES})
# endif()

add_subdirectory(3rd/boost EXCLUDE_FROM_ALL)

# test executable
set(TEST_DIR tests)
add_executable(test_unit
    ${TEST_DIR}/util_tests.cpp
)
target_link_libraries(test_unit Boost::unit_test_framework)