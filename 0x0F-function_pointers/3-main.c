#include "3-calc.h"
/**
 * main - this function is a calculator that preforms simple math
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*func_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_op = get_op_func(argv[2]);
	if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_op(num1, num2));
	return (0);
}
