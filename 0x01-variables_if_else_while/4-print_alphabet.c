#include <stdio.h>

/**
 * main - start execution here
 * Return: print or fail
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
