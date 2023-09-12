#include "src/calculator.h"

float main() {
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now
    float num1 = 1.1;
        float num2 = 2.2;
        float num3 = 0.0;
        float num4 = -1.1;
        float num5 = -2.2;
        char muuttuja = '+';
        // add floategers
        calculator(num1, muuttuja, num2);
        // substract floategers
        muuttuja = '-';
        calculator(num2, muuttuja, num1);
        // substract to negative value
        calculator(num1, muuttuja, num2);
        // multiply floategers
        muuttuja = '*';
        calculator(num1, muuttuja, num2);
        // multiply with zero
        calculator(num1, muuttuja, num3);
        // divide floategers
        muuttuja = '/';
        calculator(num1, muuttuja, num2);
        // divide with zero
        calculator(num1, muuttuja, num3);
        // operations with negative numbers
        calculator(num4, muuttuja, num5);
        muuttuja = '*';
        // multiply with negative floateger
        calculator(num4, muuttuja, num2);
        // multiply two negative floategers
        calculator(num4, muuttuja, num5);
        // divide negative floategers
        muuttuja = '/';
        calculator(num4, muuttuja, num5);
        // substract negative floategers
        muuttuja = '-';
        calculator(num4, muuttuja, num5);
        // add negative floategers
        calculator(num5, muuttuja, num4);
    return 0;
}