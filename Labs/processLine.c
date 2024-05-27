#include "functions.h"

void processLine(char buffer[]) {
    int flag = 0;
    int i = 0;
    int pos = 0;
    char c;
    while ((c = buffer[i]) != '\0') {
        if (c == ' ') {
            if (flag == 0) {
                buffer[pos++] = c;
                flag = 1;
            }
        }
        else {
            buffer[pos++] = c;
            flag = 0;
        }
        i++;
    }
    buffer[pos] = '\0';
}
