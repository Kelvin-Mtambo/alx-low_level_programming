#include "main.h"

/*
 * print_alphabet - prints alphabet in lower cases
 * Return: returns 0
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
