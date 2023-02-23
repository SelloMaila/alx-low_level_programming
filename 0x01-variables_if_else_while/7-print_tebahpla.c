#include <stdio.h>

/**
 * main - print alphabets in reverse using putchar
 * Return: Always 0 (Seccess)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
