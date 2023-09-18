#ifndef BINARYMATH_H
#define BINARYMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

// Function to Add two Binary numbers
double addBinary(std::string bin1, std::string bin2) 
{
    // Perform add
    return add<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

// Function to subtract two Binary numbers
double subtractBinary(std::string bin1, std::string bin2) 
{
    // Perform subtraction
    return subtract<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

// Function to multiply two binary numbers
double multiplyBinary(std::string bin1, std::string bin2) 
{
    // Perform multiply
    return multiply<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

// Function to divide two binary numbers
double divideBinary(std::string dividend, std::string divisor) 
{
    // Convert binary strings to decimal integers
    double decDividend= binaryToDecimal(dividend);
    double decDivisor = binaryToDecimal(divisor);

    if(decDivisor == 0)
    {
         throw std::invalid_argument("Division by zero");
    }

    // Perform multiply
    return divide<double>(decDividend, decDivisor);
}

#endif