#----- Project Set Up -----

cmake_minimum_required(VERSION 3.27.2)

project(Chess VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Automatically generate a .h file with project information to reference in code. 
configure_file(src/ChessConfig.h.in ChessConfig.h)

#----- Creating Main Executable -----
# Variables for folder names
set(HEADER_DIR src)
set(CPP_DIR src)
set(TEST_DIR tests)

set(HEADER_FILES ${HEADER_DIR}/util.hpp)
set(CPP_FILES ${CPP_DIR}/main.cpp)

add_executable(Chess ${HEADER_FILES} ${CPP_FILES})
target_include_directories(Chess PUBLIC "${PROJECT_BINARY_DIR}")

#----- Creating Test Executable -----

SET (BOOST_ROOT "/3rd/boost/libs")
find_package(Boost 1.45.0 COMPONENTS unit_test_framework REQUIRED) 

include_directories(${Boost_INCLUDE_DIRS}) 

set(TEST_FILES ${TEST_DIR}/util_tests.cpp)

add_executable(test_unit ${TEST_FILES})

target_include_directories(test_unit PUBLIC ${HEADER_DIR})

target_link_libraries(test_unit ${Boost_LIBRARIES})



# # test executable
# set(TEST_DIR tests)
# add_executable(test_unit
#     ${TEST_DIR}/util_tests.cpp
# )
# target_link_libraries(test_unit Boost::unit_test_framework)

