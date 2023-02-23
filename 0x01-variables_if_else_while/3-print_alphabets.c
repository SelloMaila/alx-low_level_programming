
#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }

    ch = 'A';
    while (ch <= 'Z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');
    return 0;
}
