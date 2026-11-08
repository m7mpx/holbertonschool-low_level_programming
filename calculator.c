#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = -1;
	double a, b;

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
		else if (choice >= 1 && choice <= 3)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%lf", &b) != 1)
				break;
			if (choice == 1)
				printf("Result: %g\n", a + b);
			else if (choice == 2)
				printf("Result: %g\n", a - b);
			else
				printf("Result: %g\n", a * b);
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
