// Standard Includes
#include <iostream>

// Local Includes
#include "ChessConfig.h"
#include "util.hpp"

int main(){
    std::cout << "Welcome to Andrew's chess project!\n";
    std::cout << "Version " << Chess_VERSION_MAJOR << "." << Chess_VERSION_MINOR << "\n";

    std::cout << add_two_numbers(1, 2);
    return 0;
}
