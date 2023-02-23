#include "main.h"

/**
 * _isalpha - alphabet character check
 * return: returns 1 for alphabet character otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c<= 90) || (c >= 97 && c<= 122))
	{
		return (1);
	}
	return (0);
}
