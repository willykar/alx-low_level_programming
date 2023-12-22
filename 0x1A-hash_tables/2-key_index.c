#include "hash_tables.h"

/**
 * key_index - Get index at which a key/value
 *      pair should be stored in array of a hash table
 * @key: key to get index
 * @size: size of the array
 *
 * Return: (index of the key)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
