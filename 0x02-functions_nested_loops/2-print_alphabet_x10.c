#include "main.h"

/**
 *print_alphabet_x10 - Make alphabet x10 times
 *Return: void
*/

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
