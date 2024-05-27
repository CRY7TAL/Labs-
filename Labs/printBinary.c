#include "functions.h"
#include <stdio.h>

// Функция для вывода числа в двоичном формате
void printBinary(unsigned long num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%lu", num % 2);
}