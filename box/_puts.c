#include "main.h"

int _puts(char *format)
{
	unsigned int i, count = 0;

	if (format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			_putchar(format[i]);
			count += 1;
		}
	}
	return (count);
}
