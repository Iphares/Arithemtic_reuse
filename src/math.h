#ifndef MATH_H
#define MATH_H

#include <iostream>

// Function to Add two numbers of any numerical type (int, double, float)
template <typename T>
T add(T val_1, T val_2) 
{
    return val_1 + val_2;
}

// Function to Subtract two numbers of any numerical type (int, double, float)
template <typename T>
T subtract(T val_1, T val_2) 
{
    return val_1 - val_2;
}

// Function to Multiply two numbers of any numerical type (int, double, float)
template <typename T>
T multiply(T val_1, T val_2) 
{
    return val_1 * val_2;
}

// Function to Divide two numbers of any numerical type (int, double, float)
template <typename T>
T divide(T val_1, T val_2) 
{
    if (val_2 == 0) 
    {
        throw std::invalid_argument("Division by zero");
    }
    return val_1 / val_2;
}

#endif