#include <stdio.h>

/**
 * compute - Reads operands and performs the selected operation
 * @choice: The operation code (1 to 4)
 * Return: 0 on success, -1 on input failure
 */
int compute(int choice)
{
	double a, b;

	printf("A: ");
	if (scanf("%lf", &a) != 1)
		return (-1);
	printf("B: ");
	if (scanf("%lf", &b) != 1)
		return (-1);
	if (choice == 1)
		printf("Result: %g\n", a + b);
	else if (choice == 2)
		printf("Result: %g\n", a - b);
	else if (choice == 3)
		printf("Result: %g\n", a * b);
	else if (b == 0)
		printf("Error: division by zero\n");
	else
		printf("Result: %g\n", a / b);
	return (0);
}

/**
 * main - Entry point for the simple calculator program
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
		else if (choice >= 1 && choice <= 4)
		{
			if (compute(choice) != 0)
				break;
		}
		else
			printf("Invalid choice\n");
	}
	return (0);
}
