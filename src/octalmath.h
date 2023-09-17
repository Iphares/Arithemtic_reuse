#include <iostream>
#include <algorithm>
#include <map>

// Function to subtract two Octal numbers
std::string addOctal(std::string oct1, std::string oct2) 
{
    std::string result = "";
    int carry = 0;

    // Make sure both strings have the same length by adding leading zeros
    int len = std::max(oct1.size(), oct2.size());
    oct1 = std::string(len - oct1.size(), '0') + oct1;
    oct2 = std::string(len - oct2.size(), '0') + oct2;

    for (int i = len - 1; i >= 0; i--) 
    {
        int digit1 = oct1[i] - '0';
        int digit2 = oct2[i] - '0';

        int sum = (digit1 + digit2 + carry) % 8;
        result = static_cast<char>(sum + '0') + result;

        carry = (digit1 + digit2 + carry) / 8;
    }

    if (carry)
    {
        result = static_cast<char>(carry + '0') + result;
    }

    return result;
}

// Function to subtract two octal numbers
std::string subtractOctal(std::string oct1, std::string oct2) 
{
    std::string result = "";
    int borrow = 0;

    int len = std::max(oct1.size(), oct2.size());
    oct1 = std::string(len - oct1.size(), '0') + oct1;
    oct2 = std::string(len - oct2.size(), '0') + oct2;

    for (int i = len - 1; i >= 0; i--) 
    {
        int digit1 = oct1[i] - '0';
        int digit2 = oct2[i] - '0';

        int diff = digit1 - digit2 - borrow;
        if (diff < 0) 
        {
            diff += 8;
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

// Function to multiply two octal numbers
std::string multiplyOctal(std::string oct1, std::string oct2) 
{
    int len1 = oct1.size();
    int len2 = oct2.size();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) 
    {
        for (int j = len2 - 1; j >= 0; j--) 
        {
            int product = (result[i + j + 1] - '0') + ((oct1[i] - '0') * (oct2[j] - '0')) + (result[i + j] - '0');
            result[i + j + 1] = static_cast<char>(product % 8 + '0');
            result[i + j] = static_cast<char>(product / 8 + '0');
        }
    }

    // Remove leading zeros
    result.erase(0, std::min(result.find_first_not_of('0'), result.size() - 1));

    return result;
}

// Function to divide two octal numbers
std::string divideOctal(std::string dividend, std::string divisor) 
{
    std::string quotient = "0";
    std::string remainder = dividend;

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
        remainder = subtractOctal(remainder, shiftedDivisor);
    }

    // Remove leading zeros from quotient
    quotient.erase(0, std::min(quotient.find_first_not_of('0'), quotient.size() - 1));

    return quotient;
}