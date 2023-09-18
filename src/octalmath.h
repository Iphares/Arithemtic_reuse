#ifndef OCTALMATH_H
#define OCTALMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

// Function to subtract two Octal numbers
double addOctal(std::string oct1, std::string oct2) 
{
    // Perform addition
    return add<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}

// Function to subtract two octal numbers
double subtractOctal(std::string oct1, std::string oct2) 
{
    // Perform subtraction
    return subtract<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}

// Function to multiply two octal numbers
double multiplyOctal(std::string oct1, std::string oct2) 
{
    // Perform multiplication
    return multiply<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}

// Function to divide two octal numbers
double divideOctal(std::string dividend, std::string divisor) 
{
    // Convert octal strings to decimal integers
    double decDividend = octalToDecimal(dividend);
    double decDivisor = octalToDecimal(divisor);

    if(decDivisor == 0)
    {
         throw std::invalid_argument("Division by zero");
    }

    // Perform division
    return divide<double>(decDividend, decDivisor);
}

#endif