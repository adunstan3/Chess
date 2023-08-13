#!/bin/sh

# The lazy persons's way to run main

cd build

if cmake --build .; then
    # Only run the main if it built successfuly
    ./Chess
fi

cd ..