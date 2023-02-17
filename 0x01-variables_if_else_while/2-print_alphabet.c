#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Default function
 *
 * Return: Returns a 1 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
