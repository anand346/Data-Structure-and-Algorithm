#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    int asciiValue = static_cast<int>(character);
    // std::cout << "Hexadecimal value of " << character << " is " << std::hex << std::setw(2) << std::setfill('0') << asciiValue << std::endl;

    //for uppercase print
    std::cout << "Hexadecimal value of " << character << " is " << std::uppercase << std::hex << std::setw(2) << std::setfill('0') << asciiValue << std::endl;

    return 0;
}