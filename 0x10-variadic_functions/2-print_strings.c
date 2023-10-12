#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n:  number of strings passed to the function
 * @...: accepts a variable number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
