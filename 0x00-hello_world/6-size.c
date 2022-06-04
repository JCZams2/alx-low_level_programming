/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

#include <stdio.h>
int main(void)
{
printf("Size of char: %d byte(s)\n", (int) sizeof(char));
printf("size of int: %d byte(s)\n", (int) sizeof(int));
printf("size of long int: %d byte(s)\n", (int) sizeof(long int));
printf("size if long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("size if float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
