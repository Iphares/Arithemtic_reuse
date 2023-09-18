#ifndef OCTALMATH_H
#define OCTALMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

/* ************************************ *
 * Author:  Isiah Phares    	*
 * Creation Date:  2023           	*
 * 				  	*
 *   DISCLAIMER!!!!!:  		  	*
 *  The following methods are provided	*
 *  to perform basic arithemtic of two octal numbers *
 * ************************************ */


/*
  Procedure..: addOctal
  Description..: Returns sum of two octal numbers in decimal form
  Params..: std::string oct1, std::string oct2
  Return..: double 
*/
double addOctal(std::string oct1, std::string oct2) 
{
    // Perform addition
    return add<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}

/*
  Procedure..: subtractOctal
  Description..: Returns difference of two octal numbers in decimal form
  Params..: std::string oct1, std::string oct2
  Return..: double 
*/
double subtractOctal(std::string oct1, std::string oct2) 
{
    // Perform subtraction
    return subtract<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}

/*
  Procedure..: multiplyOctal
  Description..: Returns quotient of two octal numbers in decimal form
  Params..: std::string oct1, std::string oct2
  Return..: double 
*/
double multiplyOctal(std::string oct1, std::string oct2) 
{
    // Perform multiplication
    return multiply<double>(octalToDecimal(oct1), octalToDecimal(oct2));
}
/*
  Procedure..: divideOctal
  Description..: Returns quotient of two octal numbers in decimal form
  Params..: std::string dividend, std::string divisor
  Return..: double 
*/
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

#endif //OCTALMATH_H