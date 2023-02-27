#include "main.h"
/**
 * _strlen - gives out length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
