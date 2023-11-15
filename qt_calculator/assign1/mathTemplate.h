/*
 * Author: Branden Holloway
 * Date: September 2023
 *
 * mathTemplate.h
 *
 * Set of templates for various math operations
 *
 */
#ifndef MATHTEMPLATE_H
#define MATHTEMPLATE_H

#include <iostream>
#include <cmath>


/**********************************************
** Function: addition()
** Description: Takes in two values and returns their sum
** Params: val_1, val_2
**********************************************/
template <typename T>
T addition(T val_1, T val_2)
{
    return val_1 + val_2;
}

/**********************************************
** Function: subtraction()
** Description: Takes in two values and returns their difference
** Params: val_1, val_2
**********************************************/
template <typename T>
T subtraction(T val_1, T val_2)
{
    return val_1 - val_2;
}

/**********************************************
** Function: multiplication()
** Description: Takes in two values and returns their product
** Params: val_1, val_2
**********************************************/
template <typename T>
T multiplication(T val_1, T val_2)
{
    return val_1 * val_2;
}

/**********************************************
** Function: division()
** Description: Takes in two values and returns their difference
** Params: val_1, val_2
**********************************************/
template <typename T>
T division(T val_1, T val_2)
{
	if(val_2 == 0)
	{
		throw std::invalid_argument("Divide by 0 ERROR");
	}
    return val_1 / val_2;
}

/**********************************************
** Function: power()
** Description: Takes in two values, base and exponent and returns the pow operation
** Params: val_1, val_2
**********************************************/
template <typename T>
T power(T val_1, T val_2)
{
    return std::pow(val_1, val_2);
}

#endif
