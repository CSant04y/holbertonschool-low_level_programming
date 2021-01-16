#include "hash_tables.h"
/**
 * hash_djb2 - This function usesed the djb2 algorithm to set up a file.
 * @str: this is a string that is passed and is transformed into an int
 *
 * Return: The hashed string is returned
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
