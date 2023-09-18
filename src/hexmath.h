#ifndef HEXMATH_H
#define HEXMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

/* ************************************ *
 * Author:  Isiah Phares    	*
 * Creation Date:  2023           	*
 * 				  	*
 *   DISCLAIMER!!!!!:  		  	*
 *  The following methods are provided	*
 *  to perform basic arithemtic of two hexadecimal numbers *
 * ************************************ */


/*
  Procedure..: addHexadecimal
  Description..: Returns sum of two Hexadecimal numbers in decimal form
  Params..: std::string hex1, std::string hex2
  Return..: double 
*/
double addHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform addition
    return add<double>(hexToDecimal(hex1), hexToDecimal(hex2));
}

/*
  Procedure..: subtractHexadecimal
  Description..: Returns difference of two Hexadecimal numbers in decimal form
  Params..: std::string hex1, std::string hex2
  Return..: double 
*/
double subtractHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform subtraction
    return subtract<double>(hexToDecimal(hex1), hexToDecimal(hex2));
}

/*
  Procedure..: multiplyHexadecimal
  Description..: Returns quotient of two Hexadecimal numbers in decimal form
  Params..: std::string hex1, std::string hex2
  Return..: double 
*/
double multiplyHexadecimal(std::string hex1, std::string hex2) 
{
    // Perform multiplication
    return multiply(hexToDecimal(hex1), hexToDecimal(hex2));
}

/*
  Procedure..: divideHexadecimal
  Description..: Returns quotient two Hexadecimal numbers in decimal form
  Params..: std::string dividend, std::string divisor
  Return..: double 
*/
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

#endif //HEXMATH_H