#include "src/calculator.h"

int main() {
        float n1 = 1.1;
        float n2 = 2.1;
        float n3 = 0;
        float n4 = -1.1;
        float n5 = -2.1;
        char op = '+';
        // sum float
        calculator(n1, op, n2);
        // substract float
        op = '-';
        calculator(n2, op, n1);
        // substract to negative value
        calculator(n1, op, n2);
        // multiply float
        op = '*';
        calculator(n1, op, n2);
        // multiply with zero
        calculator(n1, op, n3);
        // divide float
        op = '/';
        calculator(n1, op, n2);
        // divide with zero
        calculator(n1, op, n3);
        // operations with negative n
        calculator(n4, op, n5);
        op = '*';
        // multiply with negative float
        calculator(n4, op, n2);
        // multiply two negative float
        calculator(n4, op, n5);
        // divide negative float
        op = '/';
        calculator(n4, op, n5);
        // substract negative float
        op = '-';
        calculator(n4, op, n5);
        // sum negative float
        calculator(n5, op, n4);
        return 0;

}

