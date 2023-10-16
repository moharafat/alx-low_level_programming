#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string parameter input
 * Return: Always 0.
 */
void print_every_other_char(const char *str) {
    if (str == NULL) {
        return;
    }

    int i = 0;
    while (str[i] != '\0') {
        _putchar(str[i]);
        i += 2;
    }

    _putchar('\n');
}

