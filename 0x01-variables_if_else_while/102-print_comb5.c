/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
*/
#include <stdio.h>

int main(void)
{
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((i % 10) + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
