/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);

		letter--;
	}

	putchar('\n');
	return (0);
}
