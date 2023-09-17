#include <iostream>
#include <algorithm>
#include <map>
//#include "arithmetic.h"

// Function to Add two numbers of any type i.e (int, double, float)
template <typename T>
T add(T val_1, T val_2) 
{
    return val_1 + val_2;
}

// Function to Subtract two numbers of any type i.e (int, double, float)
template <typename T>
T subtract(T val_1, T val_2) 
{
    return val_1 - val_2;
}

// Function to Multiply two numbers of any type i.e (int, double, float)
template <typename T>
T multiply(T val_1, T val_2) 
{
    return val_1 * val_2;
}

// Function to Divide two numbers of any type i.e (int, double, float)
template <typename T>
T divide(T val_1, T val_2) 
{
    if (val_2 == 0) 
    {
        throw std::invalid_argument("Division by zero");
    }
    return val_1 / val_2;
}


// Function to Add two Binary numbers
std::string addBinary(std::string bin1, std::string bin2) 
{
    std::string result = "";
    int carry = 0;

    // Make sure both strings have the same length by adding leading zeros
    int len = std::max(bin1.size(), bin2.size());
    bin1 = std::string(len - bin1.size(), '0') + bin1;
    bin2 = std::string(len - bin2.size(), '0') + bin2;

    for (int i = len - 1; i >= 0; i--) 
    {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';

        int sum = (bit1 ^ bit2 ^ carry) + '0';
        result = static_cast<char>(sum) + result;

        carry = (bit1 & bit2) | (bit2 & carry) | (bit1 & carry);
    }

    if (carry)
    {
        result = '1' + result;
    }

    return result;
}

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


// Function to subtract two Binary numbers
std::string subtractBinary(std::string bin1, std::string bin2) 
{
    std::string result = "";
    int borrow = 0;

    int len = std::max(bin1.size(), bin2.size());
    bin1 = std::string(len - bin1.size(), '0') + bin1;
    bin2 = std::string(len - bin2.size(), '0') + bin2;

    for (int i = len - 1; i >= 0; i--) 
    {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';

        int diff = bit1 - bit2 - borrow;
        if (diff < 0) {
            diff += 2;
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


// Function to multiply two binary numbers
std::string multiplyBinary(std::string bin1, std::string bin2) 
{
    int len1 = bin1.size();
    int len2 = bin2.size();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) 
    {
        if (bin1[i] == '1') 
        {
            int carry = 0;
            for (int j = len2 - 1; j >= 0; j--) 
            {
                int product = (result[i + j + 1] - '0') + (bin2[j] - '0') + carry;
                result[i + j + 1] = static_cast<char>(product % 2 + '0');
                carry = product / 2;
            }
            result[i] = static_cast<char>(carry + '0');
        }
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




// Function to divide two binary numbers
std::string divideBinary(std::string dividend, std::string divisor) 
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
        remainder = subtractBinary(remainder, shiftedDivisor);
    }

    // Remove leading zeros from quotient
    quotient.erase(0, std::min(quotient.find_first_not_of('0'), quotient.size() - 1));

    return quotient;
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
























int main(int argc, char* argv[]) 
{ 
    std::cout << " \n Testing algorithms \n";

    std::cout << "Add 1 + 2 = " << add<int>(1, 2) << "\n";
    std::cout << "Add 1.5 + 2 = " << add<double>(1.5, 2) << "\n";

    std::cout << "Subtract 4 - 2 = " << subtract<int>(4, 2) << "\n";
    std::cout << "Subtract 3.5 - 2 = " << subtract<double>(3.5, 2) << "\n";

    std::cout << "Multiple 4 * 2 = " << multiply<int>(4, 2) << "\n";
    std::cout << "Multiple 4.2 * 2 = " << subtract<double>(4.2, 2) << "\n";

    std::cout << "Divide 4 / 2 = " << divide<int>(4, 2) << "\n";
    std::cout << "divide 4.2 ? 2 = " << divide<double>(4.2, 2) << "\n";

    std::cout << "Binary Add 011 + 001 = " << addBinary("011", "001") << "\n";
    std::cout << "Binary Subtract 011 - 001 = " << subtractBinary("011", "001") << "\n";
    std::cout << "Binary Divide 011 / 001 = " << divideBinary("011", "001") << "\n";
    std::cout << "Binary Multiply 011 * 001 = " << multiplyBinary("011", "001") << "\n";

    std::cout << "Hex Add F + F = " << addHexadecimal("F", "F") << "\n";
    // std::cout << "Hex Subtract F - F = " << subtractHexadecimal("F", "F") << "\n"
    std::cout << "Hex Divide FF / F = " << divideHexadecimal("FF", "F") << "\n";
    std::cout << "Hex Multiply F * F = " << multiplyHexadecimal("F", "F") << "\n";

}
