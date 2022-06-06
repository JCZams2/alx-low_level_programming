/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q')
		{
			ch++;
		}
		else if (ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	ch++;
}
