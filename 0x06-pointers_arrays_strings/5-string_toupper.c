#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str) {
    char *p = str;

    while (*p) {
        *p = toupper(*p);
        p++;
    }

    return str;
}

int main() {
    char s[] = "Hello, World!";
    printf("Original: %s\n", s);
    printf("Uppercase: %s\n", string_toupper(s));

    return 0;
}

