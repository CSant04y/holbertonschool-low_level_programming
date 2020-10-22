#include "3-calc.h"
/**
 * get_op_func - this function selects the correct function for the given op
 * @s:is the given operator to the function
 * Return: the return is 0
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
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == s[0])
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	return (NULL);
}
