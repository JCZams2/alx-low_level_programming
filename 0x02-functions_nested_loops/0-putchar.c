/**
 * main - Entry point
 *
 * Description: Printing string with putchar()
 *
 * Return: 0 Always (Success)
*/

#include <stdio.h>

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\n')
	{
		char s = str[i];
		putchar(s);	
		i++;
	}
	return (0);
}
