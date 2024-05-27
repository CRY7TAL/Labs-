#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int main() {
    int choice;
    printf("Choose number (1-7): ");
    scanf("%d", &choice);
    getchar(); // Чтение символа новой строки после ввода числа

    switch (choice) {
    case 1: {
        float L, v1, t;
        printf("Enter L, v1, t: ");
        scanf("%f %f %f", &L, &v1, &t);
        printf("Speed: %f\n", calculateSpeed(L, v1, t));
        break;
    }
    case 2: {
        double x;
        int n;
        printf("Enter x и n: ");
        scanf("%lf %d", &x, &n);
        printf("Summ of first %d members: %.2f\n", n, summa(x, n));
        break;
    }
    case 3: {
        int length;
        printf("Enter length: ");
        scanf("%d", &length);
        printf("Number of words, which has more than %d letters: %d\n", length, countWords(length));
        break;
    }
    case 4: {
        char line[1000];
        printf("Enter a propos: ");
        fgets(line, 1000, stdin);
        processLine(line);
        printf("Props after deleting: %s", line);
        break;
    }
    case 5: {
        int x[10];
        int size = 10;
        printf("Enter an elements of massive: ");
        for (int i = 0; i < size; i++) {
            scanf("%d", &x[i]);
        }
        selectiveZero(x, size);
        printf("Massive after deleting : ");
        for (int i = 0; i < size; i++) {
            printf("%d ", x[i]);
        }
        printf("\n");
        break;
    }
    case 6: {
        int x[K][N]; // Массив из K на N элементов
        int one_dim[K * N]; // Одномерный массив для хранения всех элементов
        int i, j, k = 0;

        printf("Enter an elements of massive %dx%d:\n", K, N);
        for (i = 0; i < K; ++i) {
            for (j = 0; j < N; ++j) {
                scanf("%d", &x[i][j]);
                one_dim[k++] = x[i][j]; // Заполняем одномерный массив
            }
        }

        Sort(one_dim, K * N); // Вызов функции сортировки

        // Преобразование из одномерного массива в двумерный (змейка)
        k = 0;
        for (i = 0; i < K; ++i) {
            for (j = 0; j < N; ++j) {
                x[i][j] = one_dim[k++];
            }
        }

        // Вывод отсортированного массива
        printf("Sorted massive:\n");
        for (i = 0; i < K; ++i) {
            for (j = 0; j < N; ++j) {
                printf("%4d ", x[i][j]);
            }
            printf("\n");
        }
        break;
    }
    case 7: {
        unsigned long number; // Переименованная переменная
        int position = 0;
        unsigned long mask = 1;

        printf("Enter number: ");
        scanf("%lu", &number); // Используйте новое имя переменной

        if (number == 0) {
            printf("There is no 1s.\n");
            return 0;
        }

        while ((number & mask) == 0) {
            position++;
            mask <<= 1;
        }

        printf("Position of lowest 1: %d\n", position + 1);
        printf("Number in 1001: ");
        printBinary(number);
        printf("\n");
        break;
    }
    default:
        printf("Incorrect. enter 1 to 7.\n");
    }

    // Очистка буфера ввода
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);

    // Предупреждаем пользователя о том, как выйти из программы
    printf("Press Space to exit or Enter to continue...");
    c = getchar();
    if (c == ' ') { // Если нажат пробел, выходим из программы
        return 0;
    }

    // Если нажат Enter, программа продолжит работу
    // Ваш код для продолжения работы программы...

    return 0;
}
