#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int x, y, z;

	x = 1;
	y = 2;

	printf("%ld, %ld", x, y);

	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}

	putchar('\n');
	return (0);
}
