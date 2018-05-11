#include "hash_tables.h"
/**
 * key_index - finds the index of a desiired key in a hash table
 * @key: desired key
 * @size: size of hash table
 * Return: desired index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
