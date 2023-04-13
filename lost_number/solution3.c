/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>

/* Дан массив идущих подряд чисел от 1 до N в произвольном порядке.
 * В случае пустого массива необходимо вернуть 0.
 * Из массива убран один элемент.
 * Найти пропущенное число.
 */

int lost_number(int *a, size_t size) {
    // Your code here
    if (size == 0)
        return 0;

    int u;
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-1; j++)
            if (a[j] > a[j + 1]) {
                u = a[j];
                a[j] = a[j + 1];
                a[j + 1] = u;
            }

    for (int i = 0; i < size; ++i) {
        if (a[i] != i+1)
            return i+1;
    }
}

