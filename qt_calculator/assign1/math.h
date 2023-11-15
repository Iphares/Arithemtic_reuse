/*
 * Author: Branden Holloway
 * Date: September 2023
 *
 * math.h
 *
 * Header file containing Math class definitions
 */
#ifndef MATH_H
#define MATH_H

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>


class Math
{
public:

	/*
	 * binaryAddition()
	 * params: string, string
	 * return type: string
	 */
	std::string binaryAddition(std::string, std::string);

	/*
	 * binarySubtraction()
	 * params: string, string
	 * return type: string
	 */
	std::string binarySubtraction(std::string, std::string);

	/*
	 * binaryMultiplication()
	 * params: string, string
	 * return type: string
	 */
	std::string binaryMultiplication(std::string, std::string);

	/*
	 * binaryDivision()
	 * params: string, string
	 * return type: string
	 */
	std::string binaryDivision(std::string, std::string);

	/*
	 * hexadecimalAddition()
	 * params: string, string
	 * return type: string
	 */
	std::string hexadecimalAddition(std::string, std::string);

	/*
	 * hexadecimalSubtraction()
	 * params: string, string
	 * return type: string
	 */
	std::string hexadecimalSubtraction(std::string, std::string);

	/*
	 * hexadecimalMultiplication()
	 * params: string, string
	 * return type: string
	 */
	std::string hexadecimalMultiplication(std::string, std::string);

	/*
	 * hexidecimalDivision()
	 * params: string, string
	 * return type: string
	 */
	std::string hexidecimalDivision(std::string, std::string);

	/*
	 * octalAddition()
	 * params: string, string
	 * return type: string
	 */
	std::string octalAddition(std::string, std::string);

	/*
	 * octalSubtraction()
	 * params: string, string
	 * return type: string
	 */
	std::string octalSubtraction(std::string, std::string);

	/*
	 * octalMultiplication()
	 * params: string, string
	 * return type: string
	 */
	std::string octalMultiplication(std::string, std::string);

	/*
	 * octalDivision()
	 * params: string, string
	 * return type: string
	 */
	std::string octalDivision(std::string, std::string);

private:

};

#endif
