#include "function_pointers.h"
/**
 * print_name -  prints a name
 * @name: character pointer
 * @f: pointer to a function that no return value
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
