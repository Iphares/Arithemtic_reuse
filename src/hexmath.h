#ifndef HEXMATH_H
#define HEXMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

// Function to Add two hexadecimal numbers
double addHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform addition
    return add<double>(hexToDecimal(hex1), hexToDecimal(hex2));
}

double subtractHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform subtraction
    return subtract<double>(hexToDecimal(hex1), hexToDecimal(hex2));
}

// Function to multiply two hexadecimal numbers
double multiplyHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform multiplication
    return multiply(hexToDecimal(hex1), hexToDecimal(hex2));
}

// Function to divide two hexadecimal numbers
double divideHexadecimal(std::string dividend, std::string divisor) 
{
    // Convert hexadecimal strings to decimal integers
    double decDividend = hexToDecimal(dividend);
    double decDivisor= hexToDecimal(divisor);

    if(decDivisor == 0)
    {
         throw std::invalid_argument("Division by zero");
    }

    // Perform division
    return divide<double>(decDividend, decDivisor);
}

#endif