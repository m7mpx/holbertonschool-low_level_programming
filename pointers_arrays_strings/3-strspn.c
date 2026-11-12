#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in initial segment of s consisting only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int match;

	while (*s != '\0')
	{
		match = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
