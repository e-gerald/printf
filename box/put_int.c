#include "main.h"

/**
 */

int put_int(const int *n)
{
	int i, value = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		value = _putchar(n[i] + '0');
	}
	_putchar('\n');
	return (value);
}

int main(void)

{
	unsigned int i = 0;

	int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	put_int(n);
	return (0);
}
