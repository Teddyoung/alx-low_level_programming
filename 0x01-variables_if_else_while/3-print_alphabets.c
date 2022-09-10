#include <stdio.h>

/**
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
