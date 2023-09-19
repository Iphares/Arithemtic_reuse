A Reuse oriented library of basic arithemitc covering Decimal, Binary, Octal, and Hexadecimals.

This Library was written in C++ with reuse in mind. 

For basic arithmetic using the standard c++ data types: int, float, double, and uint utilize the 
templeted functions defined in math.h

For Binary arithemic utilize binarymath.h

For Octal arithemic utilize octalmath.h 

For Hexadecimal arithemic utilize hexmath.h

To run the included unit tests, first clone the git repo then cd into the Arithmetic_reuse directory. 
For here you can run make which will captured the included MakeFile. Once compilation is complete run the command: ./Test

For use with other projects just include the path to the .h files in your Makefile and add #include "pathToFile.fileYouWantToUse.h" 
To the C++ class that will utilize the code.
