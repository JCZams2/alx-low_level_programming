/**
 * main - Entry point
 *
 * Description: printing alphabets with lower then upper case
 * 
 * Return: 0 Always (success)
*/

#include <stdio.h>
int main(void)
{
	int ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	   while (ch <= 'Z')
	   {
		   putchar(ch);
		   ch++;
	   }
	putchar('\n');
	return (0);
}
