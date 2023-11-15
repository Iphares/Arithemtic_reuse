/*
 * Author: Branden Holloway
 * Date: September 2023
 *
 * math.cpp
 *
 * Math implimentation file.
 * Performs varying mathematical operations on various number types
 */

#include "math.h"
#include "mathTemplate.h"
#include "conversions.h"


/*
 * Binary Math Operations
 */


/**********************************************
** Function: binaryAddition()
** Description: Takes in two string represented binary numbers and returns their sum.
** Params: String, String
**********************************************/
std::string Math::binaryAddition(std::string binary1, std::string binary2)
{
	double ans = addition<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

/**********************************************
** Function: binarySubtraction()
** Description: Takes in two string represented binary numbers and returns their difference.
** Params: String, String
**********************************************/
std::string Math::binarySubtraction(std::string binary1, std::string binary2)
{
	double ans = subtraction<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

/**********************************************
** Function: binaryDivision()
** Description: Takes in two string represented binary numbers and returns their quotient.
** Params: String, String
**********************************************/
std::string Math::binaryDivision(std::string binary1, std::string binary2)
{
	double ans = division<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

/**********************************************
** Function: binaryMultiplication()
** Description: Takes in two string represented binary numbers and returns their product.
** Params: String, String
**********************************************/
std::string Math::binaryMultiplication(std::string binary1, std::string binary2)
{
	double ans = multiplication<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

/*
 * Octal Math Operations
 */

/**********************************************
** Function: octalAddition()
** Description: Takes in two string represented octal numbers and returns their sum.
** Params: String, String
**********************************************/
std::string Math::octalAddition(std::string oct1, std::string oct2)
{
	double ans = addition<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

/**********************************************
** Function: octalSubtraction()
** Description: Takes in two string represented octal numbers and returns their difference.
** Params: String, String
**********************************************/
std::string Math::octalSubtraction(std::string oct1, std::string oct2)
{
	double ans = subtraction<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

/**********************************************
** Function: octalMultiplication()
** Description: Takes in two string represented binary numbers and returns their product.
** Params: String, String
**********************************************/
std::string Math::octalMultiplication(std::string oct1, std::string oct2)
{
	double ans = multiplication<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

/**********************************************
** Function: octalDivision()
** Description: Takes in two string represented binary numbers and returns their quotient.
** Params: String, String
**********************************************/
std::string Math::octalDivision(std::string oct1, std::string oct2)
{
	double ans = division(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

/*
 * Hexidecimal Math Operations
 */

/**********************************************
** Function: hexadecimalAddition()
** Description: Takes in two string represented hexadecimal numbers and returns their sum.
** Params: String, String
**********************************************/
std::string Math::hexadecimalAddition(std::string hex1, std::string hex2)
{
	double ans = addition<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}

/**********************************************
** Function: hexadecimalSubtraction()
** Description: Takes in two string represented hexadecimal numbers and returns their difference.
** Params: String, String
**********************************************/
std::string Math::hexadecimalSubtraction(std::string hex1, std::string hex2)
{
	double ans = subtraction<double>(hexToDecimal(hex1), hexToDecimal(hex2));

	return decimalToHex(ans);
}

/**********************************************
** Function: hexadecimalMultiplication()
** Description: Takes in two string represented hexadecimal numbers and returns their product.
** Params: String, String
**********************************************/
std::string Math::hexadecimalMultiplication(std::string hex1, std::string hex2)
{
	double ans = multiplication<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}

/**********************************************
** Function: hexidecimalDivision()
** Description: Takes in two string represented hexadecimal numbers and returns their quotient.
** Params: String, String
**********************************************/
std::string Math::hexidecimalDivision(std::string hex1, std::string hex2)
{
	double ans = division<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}
