#include <stdio.h>

/**
 * main - execution start
 * Return: print or fail
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
