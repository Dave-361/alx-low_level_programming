#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabets except e and q
 *
 * Return: Always Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}

