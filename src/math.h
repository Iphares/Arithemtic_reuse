#ifndef MATH_H
#define MATH_H

#include <iostream>

/* ************************************ *
 * Author:  Isiah Phares    	*
 * Creation Date:  2023           	*
 * 				  	*
 *   DISCLAIMER!!!!!:  		  	*
 *  The following methods are provided	*
 *  to perform basic arithemtic of two numerical numbers *
 * ************************************ */


/*
  Procedure..: add
  Description..: Returns sum of two numerical numbers in decimal form
    Templeted function to add two numbers of any numerical type (int, double, float)
  Params..: T val_1, T val_
  Return..: double 
*/
template <typename T>
T add(T val_1, T val_2) 
{
    return val_1 + val_2;
}

/*
  Procedure..: subtract
  Description..: Returns difference of two numerical numbers in decimal form
    Templeted function to subtract two numbers of any numerical type (int, double, float)
  Params..: T val_1, T val_
  Return..: double 
*/
template <typename T>
T subtract(T val_1, T val_2) 
{
    return val_1 - val_2;
}

/*
  Procedure..: multiply
  Description..: Returns quotient of two numerical numbers in decimal form
    Templeted function to multiply two numbers of any numerical type (int, double, float)
  Params..: T val_1, T val_
  Return..: double 
*/
template <typename T>
T multiply(T val_1, T val_2) 
{
    return val_1 * val_2;
}

/*
  Procedure..: divide
  Description..: Returns quotient of two numerical numbers in decimal form
    Templeted function to divide two numbers of any numerical type (int, double, float)
  Params..: T val_1, T val_
  Return..: double 
*/
template <typename T>
T divide(T val_1, T val_2) 
{
    if (val_2 == 0) 
    {
        throw std::invalid_argument("Division by zero");
    }
    return val_1 / val_2;
}

#endif //MATH_H