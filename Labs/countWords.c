#include "functions.h"
#include <stdio.h>

int countWords(int length) {
    int wordCount = 0;
    int letterCount = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            if (letterCount > length) {
                wordCount++;
            }
            letterCount = 0;
        }
    }
    // Проверка последнего слова в случае, если оно не заканчивается пробелом
    if (letterCount > length) {
        wordCount++;
    }
    return wordCount;
}
