#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int ten;
	char letter;

	for (ten = 0; ten < 10; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}
