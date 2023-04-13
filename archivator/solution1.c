/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 4
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/*
 * Функция archiving принимает строку заглавных латинских символов
 * и возвращает упакованный вариант этой строки.
 * Символы упаковываются по следующим правилам:
 * последовательность из нескольких одинаковых символов ("DDD") преобразуется в ("3D")
 * последовательность из одного символа переносится без изменений
 *
 * Пример:
 * archiving("WFFGGGH");
 * Должен вернуть "W2F3GH"
 *
 * Вызывающий код освобождает возвращаемый указатель
 */
/*
char *archiving(char *input)
{
    // Your code here
    return input;
}*/

char *archiving(const char *input) {
    int length = strlen(input);
    char *result = (char*)calloc(sizeof(char), (length * 2) + 1);
    int pos = 0;

    for (int i = 0; i < length;) {
        int count = 1;
        while (i + count < length && input[i] == input[i + count]) {
            count++;
        }

        if (count > 1) {
            pos += sprintf(result + pos, "%d", count);
        }

        result[pos++] = input[i];

        i += count;
    }

    return result;
}

