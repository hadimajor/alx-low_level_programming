#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints numbers of base 10 using putchar.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	putchar(a++);
	putchar ('\n');
	return (0);

}
