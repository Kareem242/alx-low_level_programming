/*
 * File: 4-print_alphabt.c
 * Auth: Kareem
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
