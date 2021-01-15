#include "hash_tables.h"

/**
 * key_index - This Function finds a key at a given index
 * by passing the string to the hasing function and modulus 20
 * @key: The string that is the key
 * @size: size of the array of the hash table
 *
 * Return: index of the hash table where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
