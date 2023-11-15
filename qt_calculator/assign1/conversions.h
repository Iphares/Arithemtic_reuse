/*
 * Author: Branden Holloway
 * Date: September 2023
 *
 * conversions.h
 *
 * Set of conversion functions for various numerical types
 *
 */
#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <iostream>
#include <string>


/**********************************************
** Function: binaryToDecimal()
** Description: Takes in a string represented binary number and returns its decimal value.
** Params: string
**********************************************/
double binaryToDecimal(std::string bn)
{
	double ans = std::stoul(bn, nullptr, 2);

	return ans;
}

/**********************************************
** Function: hexToDecimal()
** Description: Takes in a string represented hexadecimal number and returns its decimal value.
** Params: string
**********************************************/
double hexToDecimal(std::string str)
{
	double ans = std::stoul(str, nullptr, 16);

	return ans;
}

/**********************************************
** Function: octalToDecimal()
** Description: Takes in a string represented octal number and returns its decimal value.
** Params: string
**********************************************/
double octalToDecimal(std::string str)
{
	double ans = std::stoul(str, nullptr, 8);

	return ans;
}

/**********************************************
** Function: decimalToBinary()
** Description: Takes in a decimal value and returns its binary equivalent in string format.
** Params: double
**********************************************/
std::string decimalToBinary(double dec)
{
    if (dec == 0) {
        return "0"; // Special case: decimal 0 is binary 0
    }

    std::string binary = "";
    while (static_cast<int>(dec) > 0) {
        // Append the least significant bit (remainder of division by 2) to the binary string
        binary = std::to_string(static_cast<int>(dec) % 2) + binary;

        // Divide the decimal number by 2
        dec /= 2;
    }

    return binary;

}

/**********************************************
** Function: decimalToHex()
** Description: Takes in a decimal value and returns its hexadecimal equivalent in string format.
** Params: double
**********************************************/
std::string decimalToHex(double dec)
{
    std::stringstream ss;
    ss << std::hex << (int)dec;
    return ss.str();
}

/**********************************************
** Function: decimalToOctal()
** Description: Takes in a decimal value and returns its octal equivalent in string format.
** Params: double
**********************************************/
std::string decimalToOctal(double dec)
{
    if (dec == 0) {
        return "0"; // Special case: decimal 0 is octal 0
    }

    std::string octal = "";
    while (static_cast<int>(dec) > 0) {
        // Append the least significant 3 bits (remainder of division by 8) to the octal string
        octal = std::to_string(static_cast<int>(dec) % 8) + octal;

        // Divide the decimal number by 8
        dec /= 8;
    }

    return octal;
}

#endif
