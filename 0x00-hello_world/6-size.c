#include <stdio.h>

/**
 * main - Default function
 *
 * Return: Returns a 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("char size: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("int size: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("long int size: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("long long int size: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("float size: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
