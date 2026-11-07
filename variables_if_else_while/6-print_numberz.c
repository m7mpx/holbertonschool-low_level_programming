#include <stdio.h>

/**
 * main - Prints single digit base 10 numbers using putchar without char vars
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
