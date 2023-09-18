#ifndef HELPER_H
#define HELPER_H

#include <iostream>

double hexToDecimal(std::string hex)
{
    // Convert hexadecimal strings to decimal
    return std::stoul(hex, nullptr, 16);
}

double octalToDecimal(std::string octal)
{
    // Convert octal strings to decimal
    return std::stoul(octal, nullptr, 8);
}

double binaryToDecimal(std::string binary)
{
    // Convert binary strings to decimal
    return std::stoi(binary, nullptr, 2);
}

#endif