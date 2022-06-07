#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Display numbers from 0 to 9
 *
 * Return: Always Success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
