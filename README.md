# Chess
Experimenting with a C++ chess AI

## Build instructions
- Clone this repository 
- Make a build folder in the top level of the project
- `cd` into that build folder and call `cmake ..`
    - This will populate the build folder based on the CMakeLists.txt 
    It will importantly create a MakeFile which tells your computer how to create
    an executable for the project. 
- Then call `cmake --build .`
    - This will make an executable called `chess_build` using your local c++ compiler
    - It will also make a unit tests executable called `test_unit` which holds all the unit tests
- Run these executables by calling `./chess_build` or `./test_unit` respectively