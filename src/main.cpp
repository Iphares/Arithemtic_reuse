#include <iostream>
#include "binarymath.h"
#include "octalmath.h"
#include "hexmath.h"
#include "math.h"

int main() 
{ 
    std::cout << " \n Testing algorithms \n";

    std::cout << "Add 1 + 2 = " << add<int>(1, 2) << " To equal: 3" << "\n";
    std::cout << "Add 1.5 + 2 = " << add<double>(1.5, 2) << " To equal: 3.5" << "\n";

    std::cout << "Subtract 4 - 2 = " << subtract<int>(4, 2) << " To equal: 2" << "\n";
    std::cout << "Subtract 3.5 - 2 = " << subtract<double>(3.5, 2) << " To equal: 1.5"<< "\n";

    std::cout << "Multiple 4 * 2 = " << multiply<int>(4, 2) << " To equal: 8" << "\n";
    std::cout << "Multiple 4.2 * 2 = " << subtract<double>(4.2, 2) << " To equal: 8.4" << "\n";

    std::cout << "Divide 4 / 2 = " << divide<int>(4, 2) << " To equal: 2" << "\n";
    std::cout << "divide 4.2 / 2 = " << divide<double>(4.2, 2) << " To equal: 2.1" << "\n";

    std::cout << "Binary Add 011 + 001 = " << addBinary("011", "001") << " To equal: 4" << "\n";
    std::cout << "Binary Subtract 011 - 001 = " << subtractBinary("011", "001") << " To equal: 2" << "\n";
    std::cout << "Binary Divide 011 / 001 = " << divideBinary("011", "001") << " To equal: 3" << "\n";
    std::cout << "Binary Multiply 011 * 001 = " << multiplyBinary("011", "001") << " To equal: 3" << "\n";

    std::cout << "Hex Add 5 + 5 = " << addHexadecimal("5", "5") << " To equal: 10" << "\n";
    std::cout << "Hex Subtract F - F = " << subtractHexadecimal("F", "F") << " To equal: 0" << "\n";
    std::cout << "Hex Divide A / A = " << divideHexadecimal("A", "A") << " To equal: 1" << "\n";
    std::cout << "Hex Multiply F * F = " << multiplyHexadecimal("F", "F") << " To equal: 255" << "\n";

    std::cout << "Octal Add 5 + 5 = " << addOctal("5", "5") << " To equal: 10" << "\n";
    std::cout << "Octal Subtract 7 - 6 = " << subtractOctal("7", "6") << " To equal: 1" << "\n";
    std::cout << "Octal Divide 7 / 2 = " << divideOctal("7", "2") << " To equal: 3.5" << "\n";
    std::cout << "Octal Multiply 1 * 3 = " << multiplyOctal("1", "3") << " To equal: 3"<< "\n";
}
