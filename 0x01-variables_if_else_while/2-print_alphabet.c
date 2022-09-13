#include <stdio.h>

/**
 * main - start of program execution
 * Return: an integer to signify success or fail
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet < 123)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
