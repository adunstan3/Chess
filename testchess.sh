#!/bin/sh

# The lazy persons's way to run the unit tests

cd build

if cmake --build .; then
    # Only run the unit tests if they built successfuly
    ./test_unit
fi

cd ..