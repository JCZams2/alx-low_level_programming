/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}

	putchar(10);

	return (0);
}
