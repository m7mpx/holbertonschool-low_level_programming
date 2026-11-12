#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int found = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			digit = s[i] - '0';
			if (sign > 0)
			{
				res = res * 10 + digit;
			}
			else
			{
				res = res * 10 - digit;
			}
		}
		else if (found)
		{
			break;
		}
		i++;
	}
	return (res);
}
