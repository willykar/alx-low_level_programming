#include "hash_tables.h"

/**
 * hash_djb2 - A Hash function implementing the djb2 algorithm
 * @str: string
 *
 * Return: (calculated hash)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int a;

	hash = 5381;
	while ((a = *str++))
		hash = ((hash << 5) + hash) + a;

	return (hash);
}
