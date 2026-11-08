#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = -1;

	printf("Simple Calculator\n");
	while (1)
	{
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice: ");
		if (scanf("%d", &choice) != 1)
			break;
		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
	}
	return (0);
}
