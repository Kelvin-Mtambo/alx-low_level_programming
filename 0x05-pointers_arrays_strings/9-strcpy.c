#include "main.h"
/**
 * _strcpy - copies string at end of another string including \0
 * @dest: pointer of string source
 * @src: pointer of string destination
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
