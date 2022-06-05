/**
 * main - Entry point
 *
 * Description: printing alphabets in lower case
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
