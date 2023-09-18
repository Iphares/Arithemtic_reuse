#ifndef HELPER_H
#define HELPER_H

#include <iostream>

/* ************************************ *
 * Author:  Isiah Phares    	*
 * Creation Date:  2023           	*
 * 				  	*
 *   DISCLAIMER!!!!!:  		  	*
 *  The following methods are provided	*
 *  to perform conversion of Hex, Octal and Binary to Decimal *
 * ************************************ */


/*
  Procedure..: hexToDecimal
  Description..: Returns the numerical value of a hex number in decimal form
  Params..: std::string hex
  Return..: double 
*/
double hexToDecimal(std::string hex)
{
    // Convert hexadecimal strings to decimal
    return std::stoul(hex, nullptr, 16);
}

/*
  Procedure..: octalToDecimal
  Description..: Returns the numerical value of a octal number in decimal form
  Params..: std::string octal
  Return..: double 
*/
double octalToDecimal(std::string octal)
{
    // Convert octal strings to decimal
    return std::stoul(octal, nullptr, 8);
}

/*
  Procedure..: binaryToDecimal
  Description..: Returns the numerical value of a binary number in decimal form
  Params..: std::string binary
  Return..: double 
*/
double binaryToDecimal(std::string binary)
{
    // Convert binary strings to decimal
    return std::stoi(binary, nullptr, 2);
}

#endif //HELPER_H