#include "main.h"

/**
 * _isalpha - check if character is lowercase or uppercase
 * @c: Checks if the character 'c' is lowercase
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
        if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
                return (1);
        else
                return (0);
}
