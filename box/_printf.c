#include "main.h"

/**
 * c, s, %
 */

int _printf(const char *format, ...)
{
	va_list arr;
	unsigned int i = 0, value = 0, val = 0;

	va_start(arr, format);
	for ( ; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(arr, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			val = _puts(va_arg(arr, char *));
			i++;
			value += (val - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			_putchar(va_arg(arr, int) + '0');
			i++;
		}
		value += 1;
	}
	va_end(arr);
	return (value);
}
