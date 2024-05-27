#include "functions.h"

void selectiveZero(int x[], int size) {
    int aver = 0;
    for (int i = 0; i < size; i++) {
        aver += x[i];
    }
    aver /= size;
    for (int i = 0; i < size; i++) {
        if (x[i] < aver) {
            x[i] = 0;
        }
    }
}
