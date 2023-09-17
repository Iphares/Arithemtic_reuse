#include <iostream>
#include <algorithm>
#include <map>

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