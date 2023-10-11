#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to,
 * perform the operation asked by the user
 * @s: is the operator passed as argument to the program
 * If s does not match any of the 5 expected operators (+, -, *, /, %),
 * return NULL
 * Return: a pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (ops[a].op != NULL)
	{
		if (strcmp(s, ops[a].op) == 0)
			break;
		a++;
	}
	return (ops[a].f);
}
