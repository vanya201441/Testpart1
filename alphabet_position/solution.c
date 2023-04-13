/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 6
 */

#include <stdio.h>
#include <iso646.h>
#include <libc.h>
#include <ctype.h>

/*
 * Необходимо, учитывая строку, заменить каждую букву ее позицией в алфавите.
 * Если что-то в тексте не является буквой, игнорируйте это и не возвращайте.
 * «a» = 1, «b» = 2 и т.д.
 *
 * Пример:
 * alphabet_position("The sunset sets at twelve o' clock.");
 * Должен вернуть "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (в виде строки)
 *
 * Вызывающий код освобождает возвращаемый указатель
 */

char* alphabet_position(char *text) {
    // Your code here
    int first = (int) 'a';
    int last = (int) 'z';

    char *str = (char*) malloc(3 * strlen(text) * sizeof(char));
    char* number = (char*) malloc(3 * sizeof(char));
    int i = 0;

    for (char *c = text; *c != '\0'; c++) {
        if (((int) (tolower(*c)) > last) or ((int) (tolower(*c)) < first))
            continue;
        else {
            i = tolower(*c) - first + 1;
            snprintf(number, sizeof str, "%d ", i);
            strcat(str, number);
        }
    }
    str[strlen(str)-1] = '\0';
    text = (char*) malloc(strlen(str) * sizeof(char));
    strcat(text, str);

    return str;
}

