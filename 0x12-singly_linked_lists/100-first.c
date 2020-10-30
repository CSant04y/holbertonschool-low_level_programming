#include "lists.h"

void task_5(void) __attribute__((constructor));

/**
 * task_5 - this prints the strings before the main string
 *
 * Return: void
 *
 */
void task_5(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
