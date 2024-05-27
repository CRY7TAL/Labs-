#include "functions.h"
#include <math.h>

double summa(double x, int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += ((-1, i + 1) * (-1, i + 1)) * ((x / i, 2) * (x / i, 2));
    }
    return sum;
}
