#!/bin/sh

# The lazy persons's way to run main

cd build

if cmake --build .; then
    # Only run the unit tests if they built successfuly
    ./Chess
fi

cd ..