#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[16] = "0123456789abcdef
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
