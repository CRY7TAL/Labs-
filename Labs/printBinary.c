#include "functions.h"
#include <stdio.h>

// ������� ��� ������ ����� � �������� �������
void printBinary(unsigned long num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%lu", num % 2);
}