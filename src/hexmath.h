#include <iostream>
#include <algorithm>
#include <map>

// Function to Add two hexadecimal numbers
std::string addHexadecimal(std::string hex1, std::string hex2) 
{
    std::string result = "";
    int carry = 0;

    // Make sure both strings have the same length by adding leading zeros
    int len = std::max(hex1.size(), hex2.size());
    hex1 = std::string(len - hex1.size(), '0') + hex1;
    hex2 = std::string(len - hex2.size(), '0') + hex2;

    // Define a mapping from characters to their corresponding integer values
    std::string hexChars = "0123456789ABCDEF";
    std::map<char, int> hexValues;
    for (int i = 0; i < hexChars.size(); i++) 
    {
        hexValues[hexChars[i]] = i;
    }

    for (int i = len - 1; i >= 0; i--) 
    {
        int digit1 = hexValues[hex1[i]];
        int digit2 = hexValues[hex2[i]];

        int sum = digit1 + digit2 + carry;
        if (sum >= 16) 
        {
            carry = 1;
            sum -= 16;
        } 
        else 
        {
            carry = 0;
        }

        result = hexChars[sum] + result;
    }

    if (carry)
        result = hexChars[carry] + result;

    return result;
}

// Function to subtract two hexadecimal numbers
std::string subtractHexadecimal(std::string hex1, std::string hex2, std::map<char, int>& hexValues) 
{
    std::string result = "";
    int borrow = 0;

    int len = std::max(hex1.size(), hex2.size());
    hex1 = std::string(len - hex1.size(), '0') + hex1;
    hex2 = std::string(len - hex2.size(), '0') + hex2;

    for (int i = len - 1; i >= 0; i--) 
    {
        int digit1 = hexValues[hex1[i]];
        int digit2 = hexValues[hex2[i]];

        int diff = digit1 - digit2 - borrow;
        if (diff < 0) 
        {
            diff += 16;
            borrow = 1;
        } 
        else 
        {
            borrow = 0;
        }

        result = static_cast<char>(diff + '0') + result;
    }

    // Remove leading zeros
    result.erase(0, std::min(result.find_first_not_of('0'), result.size() - 1));

    return result;
}

// Function to multiply two hexadecimal numbers
std::string multiplyHexadecimal(std::string hex1, std::string hex2) 
{
    int len1 = hex1.size();
    int len2 = hex2.size();
    std::string result(len1 + len2, '0');

    std::string hexChars = "0123456789ABCDEF";
    std::map<char, int> hexValues;
    for (int i = 0; i < hexChars.size(); i++) 
    {
        hexValues[hexChars[i]] = i;
    }

    for (int i = len1 - 1; i >= 0; i--) 
    {
        for (int j = len2 - 1; j >= 0; j--) 
        {
            int product = (result[i + j + 1] - '0') + (hexValues[hex1[i]] * hexValues[hex2[j]]) + (result[i + j] - '0');
            result[i + j + 1] = static_cast<char>(product % 16 + '0');
            result[i + j] = static_cast<char>(product / 16 + '0');
        }
    }

    // Remove leading zeros
    result.erase(0, std::min(result.find_first_not_of('0'), result.size() - 1));

    return result;
}

// Function to divide two hexadecimal numbers
std::string divideHexadecimal(std::string dividend, std::string divisor) 
{
    std::string quotient = "0";
    std::string remainder = dividend;

    std::string hexChars = "0123456789ABCDEF";
    std::map<char, int> hexValues;
    for (int i = 0; i < hexChars.size(); i++) 
    {
        hexValues[hexChars[i]] = i;
    }

    while (remainder.size() >= divisor.size()) 
    {
        int shift = remainder.size() - divisor.size();
        std::string shiftedDivisor = divisor + std::string(shift, '0');
        
        if (remainder < shiftedDivisor) 
        {
            shift--;
            shiftedDivisor = divisor + std::string(shift, '0');
        }

        quotient += "1";
        remainder = subtractHexadecimal(remainder, shiftedDivisor, hexValues);
    }

    // Remove leading zeros from quotient
    quotient.erase(0, std::min(quotient.find_first_not_of('0'), quotient.size() - 1));

    return quotient;
}