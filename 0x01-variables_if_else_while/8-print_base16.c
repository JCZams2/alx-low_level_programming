/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		
		num++;
	}

	putchar('\n');
	return (0);
}
