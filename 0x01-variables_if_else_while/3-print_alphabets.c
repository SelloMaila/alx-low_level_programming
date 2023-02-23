#include "holberton.h"

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}

