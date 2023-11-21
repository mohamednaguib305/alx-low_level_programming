#include "main.h"

/**
 *print_sign - Prints the sign of a number
 *@n: The number to be checked
 *Return: return 1 for positive num
 *	  return -1 for negative num or zero for anything else
*/

int print_sign(int n)
{
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	else if (n > 0)
	{
		printf("+");
		return (1);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
