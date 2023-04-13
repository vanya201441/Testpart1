/*
 * solution.c
 * Distributed under terms of the MIT license.
 * Сложность: 7
 */

#include <stddef.h>
#include <libc.h>

/*
 * Функция get_count возвращает количество гласных в заданной строке.
 * В качестве гласных рассматриваются только (a, e, i, o, u) но не (y).
 * Входная строка будет состоять только из строчных букв и/или пробелов.
 */

size_t get_count(const char* s) {
    int count = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        switch(s[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }

    return count;
}

