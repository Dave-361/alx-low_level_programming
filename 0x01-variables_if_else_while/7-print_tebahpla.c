#include <stdio.h>
/**
 * main - Prints reversed alphabet
 *
 * Return: Always Success
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
