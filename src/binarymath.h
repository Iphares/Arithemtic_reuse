#ifndef BINARYMATH_H
#define BINARYMATH_H

#include <iostream>
#include "helper.h"
#include "math.h"

/* ************************************ *
 * Author:  Isiah Phares    	*
 * Creation Date:  2023           	*
 * 				  	*
 *   DISCLAIMER!!!!!:  		  	*
 *  The following methods are provided	*
 *  to perform basic arithemtic of two binary numbers *
 * ************************************ */


/*
  Procedure..: addBinary
  Description..: Returns sum of two binary numbers in decimal form
  Params..: std::string bin1, std::string bin2
  Return..: double 
*/
double addBinary(std::string bin1, std::string bin2) 
{
    // Perform add
    return add<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

/*
  Procedure..: subtractBinary
  Description..: Returns difference of two binary numbers in decimal form
  Params..: std::string bin1, std::string bin2
  Return..: double 
*/
double subtractBinary(std::string bin1, std::string bin2) 
{
    // Perform subtraction
    return subtract<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

/*
  Procedure..: mulitplyBinary
  Description..: Returns quotient of two binary numbers in decimal form
  Params..: std::string bin1, std::string bin2
  Return..: double 
*/
double multiplyBinary(std::string bin1, std::string bin2) 
{
    // Perform multiply
    return multiply<double>(binaryToDecimal(bin1), binaryToDecimal(bin2));
}

/*
  Procedure..: divideBinary
  Description..: Returns quotient of two binary numbers in decimal form
  Params..: std::string dividend, std::string divisor
  Return..: double 
*/
double divideBinary(std::string dividend, std::string divisor) 
{
    // Convert binary strings to decimal integers
    double decDividend= binaryToDecimal(dividend);
    double decDivisor = binaryToDecimal(divisor);

    if(decDivisor == 0)
    {
         throw std::invalid_argument("Division by zero");
    }

    // Perform division
    return divide<double>(decDividend, decDivisor);
}

#endif  //BINARYMATH_H